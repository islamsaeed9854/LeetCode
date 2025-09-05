# Write your MySQL query statement belo

with T as(
select *
from Delivery D
where order_date = (select D2.order_date from Delivery D2 where D.customer_id  = D2.customer_id order by D2.order_date limit 1 ) 
)
select round( 100.0*sum(case when order_date  = customer_pref_delivery_date   then 1 else 0 end ) /count(*),2) immediate_percentage  from T 
