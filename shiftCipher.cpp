/*	
	Nama		: M Reza Atthariq
	NPM			: 140810180060
	Kelas		: B
	Deskripsi	: Program Shift/Caesar Cipher
*/

#include<iostream>
#include<string.h>

using namespace std;

int main() {
	
	char msg[100];
	int i, j, length,choice,key;
	
   	cout << "Masukkan pesan 		: ";cin.getline(msg,100);
  
   	cout << "Masukkan nilai K 	: ";cin >> key;
   	
   	length = strlen(msg);
   	cout << "\n1. Encryption \n2. Decryption \n\nMasukkan pilihan : "; cin>>choice;
   	
		if (choice==1) {
		
	      	char ch;
      		for(int i = 0; msg[i] != '\0'; ++i) {
         		ch = msg[i];
     
	         	if (ch >= 'a' && ch <= 'z'){
	            	ch = ch + key;
	            	if (ch > 'z') {
	               		ch = ch - 'z' + 'a' - 1;
	            	}  
	            	msg[i] = ch;
	         	}
	         	
	         	else if (ch >= 'A' && ch <= 'Z'){
	            	ch = ch + key;
	            	if (ch > 'Z'){
	               		ch = ch - 'Z' + 'A' - 1;
	            	}
	            	msg[i] = ch;
         		}	
     		}		
      	printf("\nEncrypted message: %s", msg);
   		}
   		
   		else if (choice == 2) { 
      		char ch;
      		for(int i = 0; msg[i] != '\0'; ++i) {
         		ch = msg[i];
         
         		if(ch >= 'a' && ch <= 'z') {
            		ch = ch - key;
           			if(ch < 'a'){
               			ch = ch + 'z' - 'a' + 1;
            		}
            		msg[i] = ch;
         		}
         
         		else if(ch >= 'A' && ch <= 'Z') {
            		ch = ch - key;
            		if(ch < 'A') {
               			ch = ch + 'Z' - 'A' + 1;
            		}
            		msg[i] = ch;
         		}
      		}
      	cout << "\nDecrypted message: " << msg;
   }
}
