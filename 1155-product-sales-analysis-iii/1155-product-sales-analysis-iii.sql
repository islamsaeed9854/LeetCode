/* Write your T-SQL query statement below */


with MT as
(
    select * , Rank() over (partition by product_id order by year  ) as RN
    from Sales 
)
select  product_id ,year  first_year  , quantity ,price 
from MT 
where RN = 1