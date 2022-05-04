/* Creating Table */
CREATE TABLE employees (
    Employee_ID INT NOT NULL,
    First_Name VARCHAR(20),
    Last_Name VARCHAR(30),
    Salary INT,
    PRIMARY KEY (Employee_ID)
);

/* Displaying Table */
SELECT * FROM employees;

/* Table Description */
describe employees;

/* Adding New Column */
ALTER TABLE employees ADD COLUMN Contact INT ;

/* Renaming */
ALTER TABLE employees RENAME COLUMN Contact to Job_Code;

/* Erasing Data From Table (Only Data)*/
TRUNCATE TABLE employees;

/* Deleting Completely (Erasing Whole Table)*/
DROP TABLE employees ;
