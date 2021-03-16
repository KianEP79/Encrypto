#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/*This program performe followings:
1- gets a text need to be encrypted from user 
2- asks user for 6 digit encryption key
3-encrypts the text entered by user with againts the key
4-displays the encrypted text as result
*/

int main(){
	
	
	
                     /*initialiazing and defining variabels*/              	
	
	
	
	char RawText[9999];                 //Original text 
	char ProcessedText[9999];          // final encrypted text
	
    int len;                          //lenghth of the text
	int counter=0;
	
    
	int KeyDig1;                    //digits of the key
	int KeyDig2;
	int KeyDig3;
	int KeyDig4;
	int KeyDig5;
	int KeyDig6;
	
	
	printf("  \n\n\n**********WELCOME**********\n\n\n");	
	printf("Please enter the text you want to encrypt\n");                //TODO: asking for the text
	gets(RawText);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("original text is :");                                        //TODO:displaying original text entered by user
	printf("\n");
	puts(RawText);
	printf("\n");
	printf("\n");
	printf("your key includes 6 digits");
	printf("\n");
	                                                                            
	printf("now enter the digits of key you want to encrypt with\n");              // TODO: asking for digits of 6-digit key one be one 
	scanf("%d",&KeyDig1);                                                            
	printf("\n");
	scanf("%d",&KeyDig2);
	printf("\n");
	scanf("%d",&KeyDig3);
	printf("\n");
	scanf("%d",&KeyDig4);
	printf("\n");
	scanf("%d",&KeyDig5);
	printf("\n");
	scanf("%d",&KeyDig6);
	printf("\n");
	printf("\n");                                                                 
	printf("and the key is %d %d %d %d %d %d",KeyDig1,KeyDig2,KeyDig3,KeyDig4,KeyDig5,KeyDig6);       //TODO: displaying the key enterd by user
	printf("\n");
	printf("\n");
	
	
	
		len=strlen(RawText);                        //TODO: calculating the lenght of the text typed by user
	
	
	
	
	
	/* following block of code runs encryption process on the text with respect to the key
	and checks if the passed charachter is alphabet or whitespace 
	it encrypytes the alphabets and leave the spaces to remain space*/
	
	
	
	

	for (counter=0;counter<=len;counter+=6){
	   
	   if(isalpha(RawText[counter]))
	
         	ProcessedText[counter]=(((RawText[counter]-65)+KeyDig1)%26)+65;
    
       if(isspace(RawText[counter]))
     
	        ProcessedText[counter]=' ';
}
	for (counter=1;counter<=len;counter+=6){
	
        if(isalpha(RawText[counter]))
	
	        ProcessedText[counter]=(((RawText[counter]-65)+KeyDig2)%26)+65;

        if(isspace(RawText[counter]))
      
	        ProcessedText[counter]=' ';

}
	for (counter=2;counter<=len;counter+=6){
		
		if(isalpha(RawText[counter]))
	
	        ProcessedText[counter]=(((RawText[counter]-65)+KeyDig3)%26)+65;
	    
		if(isspace(RawText[counter]))
       ProcessedText[counter]=' ';
}
	for (counter=3;counter<=len;counter+=6){
	    
		if(isalpha(RawText[counter]))
		
	        ProcessedText[counter]=(((RawText[counter]-65)+KeyDig4)%26)+65;
        
		if(isspace(RawText[counter]))
       
	        ProcessedText[counter]=' ';

}
	for (counter=4;counter<=len;counter+=6){
	
		if(isalpha(RawText[counter]))
	
	        ProcessedText[counter]=(((RawText[counter]-65)+KeyDig5)%26)+65;
       
	    if(isspace(RawText[counter]))
      
	        ProcessedText[counter]=' ';

}
    for (counter=5;counter<=len;counter+=6){
	
		if(isalpha(RawText[counter]))
	
	ProcessedText[counter]=(((RawText[counter]-65)+KeyDig6)%26)+65;
	   
	    if(isspace(RawText[counter]))
       ProcessedText[counter]=' ';
}



	printf("\n");                                   //displaying the encrypted text that passed encryption process
	printf("the encrypted text is \n");
	printf("%s",ProcessedText);
}
	
