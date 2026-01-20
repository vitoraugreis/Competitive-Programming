/*
---------------------------------------------------------------
    586. Customer Placing the Largest Number of Orders
---------------------------------------------------------------
*/

SELECT customer_number
FROM Orders
GROUP BY customer_number
ORDER BY count(order_number) DESC
LIMIT 1