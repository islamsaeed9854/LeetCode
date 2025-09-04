# Write your MySQL query statement below
select customer_id , count(*) count_no_trans 
from Visits V left outer join Transactions T
on V.visit_id  =  T.visit_id 
where T.visit_id is null
group by customer_id 