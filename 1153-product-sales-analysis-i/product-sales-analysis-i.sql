# Write your MySQL query statement below
SELECT p.product_name, s.year, s.price
from SALES S JOIN PRODUCT P
ON s.product_id = p.product_id; 