
-- Join Operations (using 'tb1' and 'tb2')
-- Inner Join
SELECT * FROM tb1 INNER JOIN tb2 ON tb1.rno = tb2.rno;
-- You can also use the shorter syntax:
SELECT * FROM tb1 JOIN tb2 ON tb1.rno = tb2.rno;
-- Or the Equi-Join syntax:
SELECT * FROM tb1, tb2 WHERE tb1.rno = tb2.rno;

-- Left Outer Join
SELECT * FROM tb1 LEFT OUTER JOIN tb2 ON tb1.rno = tb2.rno;

-- Right Outer Join
SELECT * FROM tb1 RIGHT OUTER JOIN tb2 ON tb1.rno = tb2.rno;

-- Natural Join
SELECT * FROM tb1 NATURAL JOIN tb2;

-- Cross Join
SELECT * FROM tb1 CROSS JOIN tb2;
-- Or use the comma-separated syntax:
SELECT * FROM tb1, tb2;

-- Self Join
SELECT t1.rno, t2.name FROM tb1 t1, tb1 t2 WHERE t1.rno = t2.rno;

