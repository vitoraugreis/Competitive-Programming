/*
---------------------------------------------------------------
    1068. Product Sales Analysis I
---------------------------------------------------------------
*/

select p.product_name, s.year, s.price
from sales s join product p on s.product_id = p.product_id