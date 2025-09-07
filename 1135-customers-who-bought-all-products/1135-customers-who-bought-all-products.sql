/* Write your T-SQL query statement below */



with CTE as
(
   select customer_id , product_key 
   from Customer 
   group by customer_id , product_key 
)
select customer_id 
from CTE 
group by customer_id 
having count(*) = (select count(*) from Product) 