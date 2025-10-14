-- DML Commands: INSERT, UPDATE, DELETE, SELECT
-- Creating a sample students table
CREATE TABLE students (
    rollno VARCHAR(30),
    name VARCHAR(30)
);

-- Inserting data
INSERT INTO students VALUES ('24B11CS234', 'Soumya');
INSERT INTO students VALUES ('24B11CS381', 'dip');

-- Displaying data
SELECT * FROM students;
SELECT name FROM students;
SELECT * FROM students WHERE rollno = '24B11AI402';

-- Deleting a row
DELETE FROM students WHERE rollno = '24B11AI402';

-- Updating a row
UPDATE students SET name = 'Soumya' WHERE rollno = '24B11AI402';
