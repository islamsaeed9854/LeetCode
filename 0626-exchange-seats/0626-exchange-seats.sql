-- 1  | Abbot     2  | Doris      null null
-- 2  | Doris     3  | Emerson    1    Abbot
-- 3  | Emerson   4  | Green      2    Doris
-- 4  | Green     5  | Jeames     3    Emerson
-- 5  | Jeames    null null       4    Green
with CTE as(
    select count(*) CNT from Seat 
)
select s1.id, (case when s1.id % 2 = 0 then s3.student when s1.id%2!=0 and s1.id!= (select CNT from CTE ) then s2.student else s1.student end  ) student 
from Seat S1 left outer join Seat S2 on S1.id+1 = S2.id left outer join Seat S3 on S1.id-1 = S3.id