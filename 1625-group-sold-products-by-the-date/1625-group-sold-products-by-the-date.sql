
with CTE as
(
  select sell_date , product
  from Activities 
  group by sell_date , product
)
select sell_date , count(product) num_sold ,string_agg(product,',') products    
from CTE 
group by sell_date  
order by sell_date