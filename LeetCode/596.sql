/*
---------------------------------------------------------------
    596. Classes With at Least 5 Students
---------------------------------------------------------------
*/

SELECT class
FROM Courses
GROUP BY class
HAVING count(student) >= 5