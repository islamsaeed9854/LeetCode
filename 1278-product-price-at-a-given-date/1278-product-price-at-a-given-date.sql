/* Write your T-SQL query statement below */

with CTE as
(
    select *, iif(change_date <= '2019-08-16',row_number() over (partition by product_id  order by change_date) ,-1) as RN
    from Products 
)
select distinct product_id , iif(RN = -1 ,10 , new_price ) price 
from CTE C1
where C1.RN = (select max(C2.RN) from CTE C2 where C1.product_id = C2.product_id )

