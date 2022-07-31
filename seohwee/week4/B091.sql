SELECT name as Employee 
FROM employee as e
WHERE salary > (SELECT salary 
                FROM employee 
                WHERE id = e.managerid)
