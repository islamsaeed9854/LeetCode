

with T as
(
    select *, row_number() over  (partition by customer_id order by order_date  ) as RN
    from Delivery 
)
select round(100.0*sum(case when order_date  = customer_pref_delivery_date  then  1 else 0 end) /count(*),2) immediate_percentage 
from T 
where RN = 1


