-- Aggregate Functions with GROUP BY and HAVING
-- Using a sample 'company' table
-- Find the average salary
SELECT AVG(amount) FROM company;

-- Find the sum of salaries
SELECT SUM(amount) FROM company;

-- Find the maximum amount
SELECT MAX(amount) FROM company;

-- Find the minimum amount
SELECT MIN(amount) FROM company;

-- Find the total number of rows
SELECT COUNT(*) FROM company;

-- Find the sum of amount for each company
SELECT companyn, SUM(amount) FROM company GROUP BY company;

-- Find the minimum amount for each company
SELECT companyn, MIN(amount) FROM company GROUP BY company;

-- Find the maximum amount for each company
SELECT companyn, MAX(amount) FROM company GROUP BY companyn;

-- Find the count of rows for each company
SELECT companyn, COUNT(*) FROM company GROUP BY companyn;

-- Find the count of rows for each company with a count greater than 1
SELECT companyn, COUNT(*) FROM company GROUP BY companyn HAVING COUNT(*) > 1;

-- Find the sum of amount for each company having a sum greater than 10000
SELECT companyn, SUM(amount) FROM company GROUP BY companyn HAVING SUM(amount) > 10000;
