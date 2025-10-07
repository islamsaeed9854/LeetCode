/* Write your T-SQL query statement below */

select C.visited_on , (select sum(C1.amount) from Customer C1 where datediff(C.visited_on,C1.visited_on) < 7 and C.visited_on >=C1.visited_on  ) amount ,  (select round(sum(C1.amount)/7,2) from Customer C1 where datediff(C.visited_on,C1.visited_on) < 7 and C.visited_on >=C1.visited_on  ) average_amount 
from Customer C
where visited_on  >= (select  visited_on  from Customer limit 1 ) + 6
group by C.visited_on