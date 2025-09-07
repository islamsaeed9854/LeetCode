select a.sell_date
   , count(a.product) num_sold
   , string_agg(a.product,',')  products
from (select distinct sell_date,product from activities) a
group by a.sell_date
order by a.sell_date