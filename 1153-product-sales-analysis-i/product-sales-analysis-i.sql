# Write your MySQL query statement below
select product_name,year,price from sales as t1
left join product as t2
on t1.product_id = t2.product_id;