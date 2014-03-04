
#include "iostream"
#include "conio.h"
#include "string"
#include "windows.h"
#include "stdlib.h"
#include "fstream"
#include "time.h"
#include "fstream"

using namespace std;
using namespace System::Media;
using namespace System::Collections::Generic;
using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
  std::ifstream;



int pullout()        //function to choose the movie according to the randno from the list of movies
{srand ((unsigned)time(0));
 return ((rand()%15));
}


int fromfile(int ctr,char *arr)  //pulling the movie from the file
{ifstream myReadFile;
 myReadFile.open("Movies.txt");
 char output[100];
 if (myReadFile.is_open()) 
{while(ctr) 
 {myReadFile >> output;
  ctr--;
 }
}
 strcpy(arr,output);
 int i;
 for(;(unsigned)i<strlen(output);i++);
  arr[i]='\0';
myReadFile.close();
return 0;
}


void put_spaces( char* A)  //spacing out the movie name
{ int len = strlen(A);
 char B[1000]; 
 int j=0;
 for ( int i=0;i<len;i++ )
       {  if(A[i]=='/') 
         {  for (int x=j; x<j+4; x++)
             B[x] = ' '; 
             j+=4;
         }
       else 
         {B[j++] = A[i];
         B[j++]=' ';
         }
       } 
    B[--j]='\0';
       strcpy(A,B);     
}


void playsound(char *loc)    //function to play clip
 { SoundPlayer^ player = gcnew SoundPlayer();
   String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((loc)));
   player->SoundLocation = temp;
   player->Load();
   player->PlaySync();
 }


int check(char *test,char *arr,char ch) //checks if the alphabet entered is part of the answer
{int i,tr=0;                                                        
 for(i=0;(unsigned)i<strlen(test);i++)
 {
  if(test[i]==ch)                             
   { arr[i]=ch;                  //arr being filled with alphabets in appropriate places
    tr++;  
   }
  }
 if((strcmp(test,arr)==0))            //If this case is true it indicates alphabet entered was not part of answer
	return -1;
 return tr;
}

void fill(char *test,char *arr)    //this is the function that generates the _ _ _ array
{int i=0;
 for( ;(unsigned)i<strlen(test);i++)
  {if(test[i]!=' ')
    arr[i]='_'; 
   else
    arr[i]=' ';
  }
  arr[i]='\0';
}




