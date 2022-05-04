/*Creating Table*/
CREATE TABLE employees (
    EMPLOYEE_ID INT NOT NULL,
    FIRST_NAME VARCHAR(20),
    LAST_NAME VARCHAR(20),
    SALARY INT,
    PRIMARY KEY (EMPLOYEE_ID)
);

/*Inserting Data In Table*/
INSERT INTO employees(EMPLOYEE_ID , FIRST_NAME ,LAST_NAME ,SALARY) VALUES (1, 'Sujal','Mehta', 1000);
INSERT INTO employees(EMPLOYEE_ID , FIRST_NAME ,LAST_NAME ,SALARY) VALUES (2, 'Harry','Jain', 2000);
INSERT INTO employees(EMPLOYEE_ID , FIRST_NAME ,LAST_NAME ,SALARY) VALUES (3, 'Mad','Demon', 1500);
INSERT INTO employees(EMPLOYEE_ID , FIRST_NAME ,LAST_NAME ,SALARY) VALUES (4, 'Sundar','Pichai', 2000);
INSERT INTO employees(EMPLOYEE_ID , FIRST_NAME ,LAST_NAME ,SALARY) VALUES (5, 'Hell','Demon', 5000);
INSERT INTO employees(EMPLOYEE_ID , FIRST_NAME ,LAST_NAME ,SALARY) VALUES (6, 'Paradise','Angelia', 1000);

/*Displaying Table*/
SELECT *FROM employees ;

/*Updating Data (LAST_NAME)->Here*/
UPDATE employees SET LAST_NAME = 'Balika' WHERE EMPLOYEE_ID = 4 ;

/*Displaying Table*/
SELECT *FROM employees ;

/*Deleting Data*/
DELETE FROM employees WHERE EMPLOYEE_ID IN (1,5);

/*Displaying Table*/
SELECT *FROM employees ;



