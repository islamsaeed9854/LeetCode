/* Write your T-SQL query statement below */
select *
from Patients 
where conditions like '%[ ]DIAB1%' or substring(conditions,1,5)= 'DIAB1'