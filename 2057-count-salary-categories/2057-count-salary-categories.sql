
with P_category as (
select *, CASE 
            WHEN income < 20000 THEN 'Low Salary'
            WHEN income BETWEEN 20000 AND 50000 THEN 'Average Salary'
            ELSE 'High Salary'
        END AS category from Accounts
union all
select *,CASE 
            WHEN income < 20000 THEN 'Low Salary'
            WHEN income BETWEEN 20000 AND 50000 THEN 'Average Salary'
            ELSE 'High Salary'
        END AS category from (
    values(-1,1),
    (-2,20000),
    (-3,100000)
) as virtual_rows(account_id ,income ))
select category , count(category)-1 as accounts_count  from P_category
group by category

