# Write your MySQL query statement below
select t1.product_id,
ifnull(round(sum(t1.price*t2.units)/sum(t2.units),2),0) as average_price
from prices t1
left join unitssold t2
on t1.product_id = t2.product_id
and t1.start_date <= t2.purchase_date
and t1.end_date >= t2.purchase_date
group by product_id;