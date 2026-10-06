# Write your MySQL query statement below
Select name,bonus
FROM Employee e
LEFT JOIN BONUS b
ON  e.empId=b.empId
WHERE   b.bonus IS null || b.bonus<1000;