    /* Write your T-SQL query statement below */

    with FirstLogin as (
    select player_id,min(event_date) min_date
    from Activity
    group by player_id 
    )
    select round(  1.00* count(distinct A.player_id)  /   (select count(player_id) from FirstLogin) ,2) fraction  
    from Activity A join FirstLogin F
    on A.player_id = F.player_id WHERE
     DATEDIFF(A.event_date, F.min_date) = 1;