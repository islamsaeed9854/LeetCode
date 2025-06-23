
select distinct(T2.num) ConsecutiveNums 
from Logs T1 , Logs T2 , Logs T3
where T2.num = T1.num and T2.num = T3.num and T1.id+1 = T2.id and T2.id+1 = T3.id 