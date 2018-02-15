/*
	Name: Fall animation
	Copyright: 
	Author: Kevin Chauca e Stefano Nola
	Date: 03/11/16 11:06
	Description: 
*/
#include<stdio.h>
#include<time.h>
#define MAXFRAME 50
 int main(){
 	int frame, delay,skip;
 	clock_t stoptime, currtime;
 	int a,b;
 	int ValidValue,ValidType;
 	frame=0;
 	//ask delay (ms)
 	do{	
		printf("Inserisci il ritardo: ");
 		fflush(stdin);
 		ValidType = scanf("%d", &delay);
 		if(!ValidType){
 			printf("Tipo Non Valido, Riprova");
		}else if (delay<=0){
			printf("Valore Non Valido, Riprova");
			ValidValue=0;
		}else{
			ValidValue=1;
		}
 	}while((!ValidType)||(!ValidValue));
	
	for(a=0;a<MAXFRAME;a=a+1){
		system("cls");
		for(b=0;b<a;b=b+1){
			printf("\n");
		
						
		}
		for(b=0;b<a;b=b+1){
			printf("\t");
		
						
		}
		for(b=0;b<a;b=b+1) {
		
		printf("O");}
		currtime=clock();
		stoptime=currtime+delay;
		do{
			//nothing
		}while(clock()<stoptime);
	}
	return 0;
 }
