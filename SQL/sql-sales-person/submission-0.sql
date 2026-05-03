-- Write your query below
select s.name
from sales_person s
WHERE sales_id NOT IN (
select sales_id
from orders o
inner join company p
ON p.com_id=o.com_id 
where p.name = 'CRIMSON'
);