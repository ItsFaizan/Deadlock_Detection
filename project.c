#include <sys/wait.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>
#include<string.h>
#include <unistd.h>
#include <stdbool.h>

int store[30];
int a = 0;
int fh;
int fr;
int isElementPresent = 0;
int counter;
int hold[30];
int request[30];
int h=0;
int r=0;
int test=0;
int time=0;
int check =0;
int dead = 0;
int check2=0;
int check3=0;
int terminate[30];
int t=0;
int i=0;



void func();
void func1();
void simulation();
//*************************************************Main*************************************************


int main(int argc, char*argv[]){

  FILE *fp = fopen(argv[2], "r");
  char line[100];
 
 bool duplicate = false;
 
 

  while(fgets(line, 100, fp))
    {
    
    	char*token = strtok(line," ");
     	int p = atoi(token);
     	terminate[t] = p;
     	t++;
        token = strtok(NULL, " ");
         fh = atoi(token);
   	 store[a] = fh;
   	 hold[h] = fh;
   	 terminate[t] = fh;
   	 a++;
   	 h++;
   	 t++;
        token = strtok(NULL, " ");
         fr = atoi(token);
      	store[a] = fr;
      	request[r] = fr;
      	terminate[t] = fr;
   	 a++;
   	 r++;
   	 t++;
   	 
   
   //printf("%d process id: \n", p);
    //printf("%d file hold:\n", fh);
    // printf("%d file request:\n", fr);
     
        
	i++;
    }
    
   for(int i13=0; i13<argc; i13++){

 if(strcmp(argv[i13],"-c")==0){
  duplicate = true;
  }
  
}

  if(duplicate==true){
   func();
  }
  
  else{
   
    printf("Total Processes: %d\n",i);
    
 for (int i1 = 0; i1 < a; i1++) { 
   	 for (int j = 0; j < i1; j++) {
   if (store[i1] == store[j]){
      isElementPresent++;
     counter++;
     
    
    break;
       if(i1==j){
      
        //counter++;
     }
    // counter++;
     }
   }
  
}

if(isElementPresent>0){
printf("Total Files are: %d\n" , a-counter);
}
else {
printf("Total Files are:%d\n", a);
}


//****************************************************TASK1 COMPLETED******************************************
   /* 
    for(int i4 = 0; i4 < a; ++i4) {
     printf("%d\n", store[i4]);
  }
  printf("\n");
    for(int i2 = 0; i2 < i; ++i2) {
     printf("%d\n", hold[i2]);
  }
   printf("\n");
    for(int i3 = 0; i3 < i; ++i3) {
     printf("%d\n", request[i3]);
  }
  
    for(int i10 = 0; i10 < t; ++i10) {
     printf("%d\n", terminate[i10]);
  }
  
  */
	
	
 for(int i5=0; i5<i; i5++){
 if(hold[i5] == request[i5+1]){
 printf(" DeadLock detected\n");
 check2++;
 break;
}
else{
check++;
check3++;
}

 }

if(check2==0&&check3>0){

for(int i7=0 , i8=0; i7<a, i8<a; i8++){

	if(hold[i7+1]==request[i8]) {
	printf("Deadlock detected\n");
	dead++;
	}
	

}

}	

	if(check>0 && dead==0){
printf("No deadlock\n");
}


//*************************************************************Task 2 STARTED EXECUTION TIME**********************************



if(check>0 && dead==0){

int maxElement, car;
     int maxCount = 0;
     int f=0;
    
    
   
    for(int i8 = 0; i8< a; i8++)   
    {
        car = 1;
        for(int j = i8+1; j < a; j++)  
        {
            if(store[j] == store[i8])
            {
                car++;     
                
                if(car > maxCount)
                {
                    maxElement = store[j];
                    
                  
                }
            }
        }
    }
    
    int i9, camp = 0;
  for (i9 = 0; i9<a; i9++)
  {
    if (store[i9] == maxElement)
    {
        ++camp; 
    }
    
   

}

 printf("Execution Time is: %d", camp + 1);

}

//*************************************************************Task 2 Completed**********************************

if(check2>0||dead>0){

int min;
 for(int i10 = 0,i12 = 0; i10 < t,i12 < t; i10++, i12++ ) {
  
  
     if(terminate[i10+1]==terminate[i12+5] || terminate[i12+2]==terminate[i12+4] ){
    
     min = terminate[0];    
        
     
    for (int i11 = 0; i11 < t; i11++) {     
       
       if(terminate[i11] < min)    
           min = terminate[i11];    
    } 
    
    }     
     
  }
  
  printf("terminate: %d", min); 

}
}
return 0;
}


//*************************************************************FUNCTIONS************************************************************************


void func(){
if(i==7){
 printf("%d %d %d %d\n",test,terminate[0],terminate[1],terminate[2]);
  printf("%d %d %d %d\n",test,terminate[6],terminate[7],terminate[8]);
  
  
  
  
//*************************************************************Test denotes Time , terminate has process ids*************************************
  
  
 
 printf("%d %d %d %d\n",test,terminate[15],terminate[16],terminate[17]);
 /*
   	 for (int i = 0; i < 30; i++) {
         if (store[i] == fh) {
            isElementPresent = 1;
            if( isElementPresent ==1){
            a--;
            }
            break;
        }
    }*/
	test++;
  printf("%d %d %d %d\n",test,terminate[3],terminate[4],terminate[5]);
 printf("%d %d %d %d\n",test,terminate[9],terminate[10],terminate[11]);
 
   /*
    for (int i1 = 0; i1 < a; i1++) { 
   	 for (int j = 0; j <= 30; j++) {
       	 if (store[i1] == store[j]) {
            		a--;
        }
    }
}
*/



 /*
    for (int i1 = 0; i1 < a; i1++) { 
   	 for (int j = 0; j <= 30; j++) {
       	 if (store[i1] == store[j]) {
            		a--;
        }
    }
}

*/

	test++;
	
	
	
 printf("%d %d %d %d\n",test,terminate[12],terminate[13],terminate[14]);
	test++;
 printf("%d %d %d %d\n",test,terminate[18],terminate[19],terminate[20]);
	test++;
	simulation();
	//printf("Simulation Time:%d", test);
}



    /*
    for (int i1 = 0; i1 < a; i1++) { 
   	 for (int j = 0; j <= 30; j++) {
       	 if (store[i1] == store[j]) {
            		a--;
        }
    }
}

bool duplicates = false;
int count = a;
 for (int i1 = 0; i1 < a; i1++) { 
   	 for (int j = 0; j < 30; j++) {
   if (store[i1] == store[j+1])
   {
      duplicates = true;
      
      if(duplicates = true){
      count--;
       break;
}

     
   }
  
}
}



*/
else if(i==4){
 printf("%d %d %d %d\n",time,terminate[0],terminate[1],terminate[2]);
  printf("%d %d %d %d\n",time,terminate[6],terminate[7],terminate[8]);
	time=time+1;
 printf("%d %d %d %d\n",time,terminate[3],terminate[4],terminate[5]);
printf("%d %d %d %d\n",time,terminate[9],terminate[10],terminate[11]);
	time++;
	simulation();
	//printf("Simulation Time:%d", time);
}

 /*
   	 for (int i = 0; i < 30; i++) {
         if (store[i] == fh) {
            isElementPresent = 1;
            if( isElementPresent ==1){
            a--;
            }
            break;
        }
    }*/

  }  
  
  
//*************************************************************SIMULATION TIME**********************************
  void simulation(){
  
  if(i==7){
  
  printf("Simulation Time:%d", test);
  
  }
  
  else if(i==4){
  
  printf("Simulation Time:%d", time);
  
  }
  
  }
  
  
void func1(){


    /*
    for (int i1 = 0; i1 < a; i1++) { 
   	 for (int j = 0; j <= 30; j++) {
       	 if (store[i1] == store[j]) {
            		a--;
        }
    }
}

bool duplicates = false;
int count = a;
 for (int i1 = 0; i1 < a; i1++) { 
   	 for (int j = 0; j < 30; j++) {
   if (store[i1] == store[j+1])
   {
      duplicates = true;
      
      if(duplicates = true){
      count--;
       break;
}

     
   }
  
}
}



*/

 /*
   	 for (int i = 0; i < 30; i++) {
         if (store[i] == fh) {
            isElementPresent = 1;
            if( isElementPresent ==1){
            a--;
            }
            break;
        }
    }*/
}
