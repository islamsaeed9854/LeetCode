/* Write your T-SQL query statement below */

select x,y,z,iif(x+y>z and x+z > y and y+z > x,'Yes','No') triangle 
from Triangle 