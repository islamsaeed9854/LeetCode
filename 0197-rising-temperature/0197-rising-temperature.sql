# Write your MySQL query statement below
select W1.id
from Weather W1 join Weather W2

where w1.temperature  > w2.temperature and datediff(w1.recordDate ,w2.recordDate ) = 1