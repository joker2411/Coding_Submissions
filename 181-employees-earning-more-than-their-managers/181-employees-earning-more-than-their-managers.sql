# Write your MySQL query statement below
SELECT E.name as Employee
FROM Employee AS E
JOIN Employee AS S ON E.managerId = S.id AND E.salary > S.salary