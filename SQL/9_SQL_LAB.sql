/*

	|-------------------------------------------------------|
	|	# Datasets Used : Cricket_1.csv , Cricket_2.csv		|
	|	--Cricket_1 is the table for cricket test match 1 . |
	|	--Cricket_2 is the table for cricket test match 2 . |
    |-------------------------------------------------------|
    
	Q1 . Find all the players who were present in the test match 1 or test match 2 ;
    
    Q2 . Write a MySQL query to find the players from the test match 1 having popularity higher than the average popularity . 
    Q3 . Find player_id and player name that are common in the test match 1 and test match 2 . 
    
    Q4 . Retrieve Player_id , runs , and player_name from Cricket_1 table and display list of the players where the runs 
		 are more than the average runs .
         
	Q5 . Write a query to extract the player_id , runs and player_name from the table "Cricket_1" where the runs are greater 
		 than 50 . 
         
	Q6 . Write a query to extract all the column from Cricket_1 where player_name starts with 'y' and ends with 'v'.
    
    Q7 . Write a query to extract all the columns from Cricket_1 where player_name doesn't end with 't' .
    
	|-------------------------------------------------------|
	|	# Dataset Used : new_cricket.csv					|
    |-------------------------------------------------------|
    
    Q11 . Extract the player_id and player_name of the players where the charisma value is null . 
    
    Q12 . Seperate all player_id into single numberic ids (example PL1 = 1 ).
    
    Q13 . Write a MySQL query to extract player_id , player_name and charisma where the charisma is greater than 25 . 
*/

/* Q1 */
select player_name from cricket_1
union 
select player_name from cricket_2 ;

/* Q2 */
select player_name , Popularity from cricket_1 where popularity > (select avg(Popularity) from cricket_1);

/* Q3 */
select player_name  from cricket_1 where cricket_1.player_name IN (select player_name from cricket_2 );

 /* Q4 */
 select player_name , runs  from cricket_1 where runs > (select avg(runs) from cricket_1 );

/* Q5 */
select player_name ,  runs from cricket_1 where runs > 50 ;

/* Q6 */
select * from cricket_1 where player_name like 'y%' ;

/* Q7 */
select *from cricket_1 where player_name not like '%t' ;



select *from cricket_1 ;
select *from cricket_2 ;

/* Q11 */
select c.player_name , cc.charisma 
from cricket_1 c
left join cricket_2 cc 
on cc.charisma is null 
union 
select cc.Player_Name , cc.charisma 
from cricket_2 cc 
right join cricket_1 c
on cc.charisma is  null ;















