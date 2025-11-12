SELECT 
  distinct(t1.product_name),
  sum(t2.unit) as unit
FROM products t1
INNER JOIN orders t2
  ON t1.product_id = t2.product_id
WHERE t2.order_date BETWEEN '2020-02-01' AND '2020-02-29'
group by product_name
having unit>=100;