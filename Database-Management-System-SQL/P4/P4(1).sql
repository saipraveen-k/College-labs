-- Normalization: Creating normalized tables from the 'univ_denorm' table
CREATE TABLE Students AS
SELECT DISTINCT StudentID, StudentName, Major FROM univ_denorm;

CREATE TABLE Courses AS
SELECT DISTINCT CourseID, CourseName, Credits FROM univ_denorm;

CREATE TABLE Instructors AS
SELECT DISTINCT InstructorID, InstructorName, Phone FROM univ_denorm;

CREATE TABLE Enrollments AS
SELECT DISTINCT StudentID, CourseID, EnrollmentDate FROM univ_denorm;

CREATE TABLE Course_Instructors AS
SELECT DISTINCT CourseID, InstructorID FROM univ_denorm;
