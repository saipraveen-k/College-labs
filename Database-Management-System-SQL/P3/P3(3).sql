-- Nested and Correlated Subqueries
-- Nested Query using IN: Find names of sailors who have reserved boat 103
SELECT s.sname FROM sailors s WHERE s.sid IN (SELECT r.sid FROM reserves r WHERE r.bid = 103);

-- Nested Query using NOT IN: Find names of sailors who have not reserved boat 103
SELECT s.sname FROM sailors s WHERE s.sid NOT IN (SELECT r.sid FROM reserves r WHERE r.bid = 103);

-- Nested Query using ALL: Find the sailor with the highest rating
SELECT s.sid FROM sailors s WHERE s.rating >= ALL (SELECT s1.rating FROM sailors s1);

-- Nested Query using ANY: Find the sailor IDs whose rating is better than Andy's
SELECT s.sid FROM sailors s WHERE s.rating > ANY (SELECT s1.rating FROM sailors s1 WHERE s1.sname = 'Andy');

-- Correlated Subquery using EXISTS: Find names of sailors who have reserved boat 103
SELECT s.sname FROM sailors s WHERE EXISTS (SELECT * FROM reserves r WHERE s.sid = r.sid AND r.bid = 103);

-- Correlated Subquery using NOT EXISTS: Find names of sailors who have not reserved boat 103
SELECT s.sname FROM sailors s WHERE NOT EXISTS (SELECT * FROM reserves r WHERE s.sid = r.sid AND r.bid = 103);
