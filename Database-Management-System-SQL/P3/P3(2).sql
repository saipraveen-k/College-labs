-- Set Operations (using Sailors, Reserves, and Boats tables)
-- UNION: Find names of sailors who reserved a red OR a green boat (removes duplicates)
SELECT s.sname FROM sailors s, reserves r, boats b
WHERE s.sid = r.sid AND b.bid = r.bid AND b.bcolor = 'Red'
UNION
SELECT s1.sname FROM sailors s1, reserves r1, boats b1
WHERE s1.sid = r1.sid AND r1.bid = b1.bid AND b1.bcolor = 'Green';

-- UNION ALL: Same as UNION but includes duplicate rows
SELECT s.sname FROM sailors s, reserves r, boats b
WHERE s.sid = r.sid AND b.bid = r.bid AND b.bcolor = 'Red'
UNION ALL
SELECT s1.sname FROM sailors s1, reserves r1, boats b1
WHERE s1.sid = r1.sid AND r1.bid = b1.bid AND b1.bcolor = 'Green';

-- INTERSECT (implemented via INNER JOIN in MySQL): Find names of sailors who reserved a red AND a green boat
SELECT s.sname FROM sailors s INNER JOIN reserves r ON s.sid = r.sid INNER JOIN boats b ON r.bid = b.bid
WHERE b.bcolor = 'Red' AND s.sname IN (
    SELECT s1.sname FROM sailors s1 INNER JOIN reserves r1 ON s1.sid = r1.sid INNER JOIN boats b1 ON r1.bid = b1.bid
    WHERE b1.bcolor = 'Green'
);

-- MINUS (implemented via LEFT JOIN and IS NULL in MySQL): Find names of sailors who reserved a red boat but not a green boat
SELECT s.sname FROM sailors s INNER JOIN reserves r ON s.sid = r.sid INNER JOIN boats b ON r.bid = b.bid
WHERE b.bcolor = 'Red' AND s.sname NOT IN (
    SELECT s1.sname FROM sailors s1 INNER JOIN reserves r1 ON s1.sid = r1.sid INNER JOIN boats b1 ON r1.bid = b1.bid
    WHERE b1.bcolor = 'Green'
);
