/* Write your T-SQL query statement below */

with Customer_count as
(
    select customer_id , count(distinct product_key ) cnt
    from Customer 
    group by customer_id
),Product_cnt as
(
   select count(*) cnt from  Product 
)
select customer_id 
from Customer_count C join Product_cnt P
on C.cnt = P.cnt

