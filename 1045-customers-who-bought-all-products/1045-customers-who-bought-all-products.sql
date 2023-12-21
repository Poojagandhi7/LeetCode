# Write your MySQL query statement below 
select c.customer_id
from Customer as c
group by c.customer_id
having count(distinct c.product_key) in (select count(distinct p.product_key) from Product as p);