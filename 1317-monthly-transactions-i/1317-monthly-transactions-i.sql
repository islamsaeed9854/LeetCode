

select  format(trans_date ,'yyyy-MM') month ,country , count(*) trans_count , sum(case when state = 'approved' then 1 else 0 end) approved_count ,
sum(amount ) trans_total_amount  , sum(case when state = 'approved' then amount  else 0 end) approved_total_amount 
from Transactions
group by format(trans_date ,'yyyy-MM'),country 