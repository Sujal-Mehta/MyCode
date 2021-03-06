		/*Creating Tables*/
CREATE TABLE PRODUCT_ONE (
    CATEGORY_ID INT,
    PRODUCT_NAME VARCHAR(20)
);

CREATE TABLE PRODUCT_TWO (
CATEGORY_ID INT , 
PRODUCT_NAME VARCHAR(20)
);

		/*Inserting Data*/
INSERT INTO PRODUCT_ONE(CATEGORY_ID , PRODUCT_NAME) VALUES(1,'NOKIA');
INSERT INTO PRODUCT_ONE(CATEGORY_ID , PRODUCT_NAME) VALUES(2,'SAMSUNG');
INSERT INTO PRODUCT_ONE(CATEGORY_ID , PRODUCT_NAME) VALUES(3,'HP');
INSERT INTO PRODUCT_ONE(CATEGORY_ID , PRODUCT_NAME) VALUES(4,'LG');

SELECT *FROM PRODUCT_ONE ;

INSERT INTO PRODUCT_TWO(CATEGORY_ID , PRODUCT_NAME) VALUES(1,'SAMSUNG');
INSERT INTO PRODUCT_TWO(CATEGORY_ID , PRODUCT_NAME) VALUES(2,'LG');
INSERT INTO PRODUCT_TWO(CATEGORY_ID , PRODUCT_NAME) VALUES(3,'HP');
INSERT INTO PRODUCT_TWO(CATEGORY_ID , PRODUCT_NAME) VALUES(4,'DELL');
INSERT INTO PRODUCT_TWO(CATEGORY_ID , PRODUCT_NAME) VALUES(6,'APPLE');
INSERT INTO PRODUCT_TWO(CATEGORY_ID , PRODUCT_NAME) VALUES(10,'PLAYSTATION');

SELECT *FROM PRODUCT_TWO ;

		/*Displaying Both Table Datas Elemeting Duplicate value using UNION*/
SELECT PRODUCT_NAME FROM PRODUCT_ONE 
UNION 
SELECT PRODUCT_NAME FROM PRODUCT_TWO ;

		/*Displaying Both Tables Datas without Elemeting Duplicate value using UNION ALL*/
SELECT PRODUCT_NAME FROM PRODUCT_ONE
UNION ALL
SELECT PRODUCT_NAME FROM PRODUCT_TWO ;




