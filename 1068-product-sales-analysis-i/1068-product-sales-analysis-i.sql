/* Write your T-SQL query statement below */


select product_name , year  ,price 
from Sales S join Product P
on S.product_id  = p.product_id 