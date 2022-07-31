SELECT Customers.name AS Customers
FROM Customers
Where Customers.id NOT IN (
    SELECT DISTINCT(Orders.customerId)
    FROM Orders
)
