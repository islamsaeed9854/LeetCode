/* Write your T-SQL query statement below */

select product_name , sum(unit) unit        
from Products P join Orders O
on P.product_id = O.product_id  
where year(order_date) = '2020' and month(order_date)= '02'
group by product_name
having sum(unit) >= 100