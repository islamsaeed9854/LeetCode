# Write your MySQL query statement below
select W1.id
from Weather W1 join Weather W2
on  w1.temperature  > w2.temperature 
where  datediff(w1.recordDate ,w2.recordDate ) = 1