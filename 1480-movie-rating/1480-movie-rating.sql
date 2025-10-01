

/* Write your T-SQL query statement below */

with CTE as (
   select U.name , movie_id , M.user_id  ,rating, created_at , row_number() over (partition by M.user_id order by M.user_id ) RN
    from MovieRating M join Users U
    on M.user_id = U.user_id 
), bset_name as (
    select top 1 name as results      
    from CTE
    group by name
    having count(user_id) = (select max(RN) from CTE)
    order by name 
), best_movie as (
    select top 1 V.title as results
    from MovieRating M join Movies V
    on M.movie_id = V.movie_id
    where year(created_at) = '2020' and month(created_at) = '02'
    group by V.title
    order by avg(rating*1.0) desc , V.title asc
)
select results from bset_name
union all
select results from best_movie


