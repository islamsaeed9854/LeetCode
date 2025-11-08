# Write your MySQL query statement below


with CTE as
(
    select D.name Department , E.name Employee , E.salary Salary, dense_rank() over (partition by D.id order by salary desc) as DN
    from Employee E, Department D where E.departmentId = D.id
)
select Department , Employee , Salary from CTE where DN <= 3
