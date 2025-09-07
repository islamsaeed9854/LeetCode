

select activity_date day ,count(distinct user_id) active_users 
from Activity 
where datediff(day,activity_date,'2019-07-27') < 30
    and datediff(day,activity_date,'2019-07-27') >= 0
group by activity_date 
