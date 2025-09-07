/* Write your T-SQL query statement below */

select user_id , upper(substring(name,1,1)) + lower(substring(name,2,len(name)-1)) name
from Users 
order by user_id