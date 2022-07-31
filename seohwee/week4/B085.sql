SELECT p.firstname,p.lastname,a.city,a.state
FROM Person as p
LEFT JOIN Address as a
USING (personId)
