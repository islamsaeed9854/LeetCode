/* Write your T-SQL query statement below */


delete P1 from Person P1
where email in (select email from  Person P where P.id < P1.id and P.email = P1.email )