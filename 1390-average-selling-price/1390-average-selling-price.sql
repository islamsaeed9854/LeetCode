# Write your MySQL query statement below


select P.product_id ,  ifnull(round(sum(price * units)/sum(units),2),0) average_price 
from Prices P left outer join UnitsSold U
on P.product_id = U.product_id and purchase_date between start_date and end_date   
group by P.product_id 