#include <stdio.h>
/*
 
 الفكرة في انك تستخدم
    int x;
 هنا x بواحد
    x = 1;
 بس ممكن اغيرها
    x=2;
 x بتاخد اخر قيمة
 note :
 **** const cant be change ****
 const int x = 1;
 x=9; // Error
 
 
 */

int main (){
int input;// دا اللي هنستخدمه
int max,min;


//get the first number
printf("enter the number: ");
scanf("%d",&input);
	max = input ;
	min = input ;

// check for max and min number
if (input>max){
      max= input;
}

if (input<min){
	min=input;
}

//get number 2
printf("enter a number :");
scanf("%d",&input);

//check for max and min number
if (input>max){
	max = input;
}
if (input < min ){
	min = input;
}

//get number 3
printf("enter a number : ");
scanf ("%d",&input);
// check for max and min number
if (input > max ){
	max=input;
}
if (input < min){
	min=input;
}
    
    
//get number 4
printf("enter a number : ");
scanf ("%d",&input);
// check for max and min number
if (input > max ){
	max=input;
}
if (input < min){
	min=input;
}
    
    
//get number 5
printf("enter a number : ");
scanf ("%d",&input);
// check for max and min number
if (input > max ){
	max=input;
}
if (input < min){
	min=input;
}

printf("the max number is : %d\nthe min number is : %d",max,min);

return 0;
}
