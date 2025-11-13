# Write your MySQL query statement below
select t1.firstname,t1.lastname,t2.city,t2.state
from person t1
left join address t2
on t1.personid = t2.personid;