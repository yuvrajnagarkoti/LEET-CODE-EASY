# Write your MySQL query statement below
select name,bonus from employee as t1
left join bonus as t2
on t1.empid = t2.empid
where bonus < 1000 or bonus is null;