#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<windows.h>
#include<ctime>
#include<unistd.h>
#include<math.h>

using namespace std;

long int randomNumber(long int lowerLimit , long int upperLimit)        //func for generating random number 
{
	long int randomOutputInt=0;
		randomOutputInt = rand() % (upperLimit - lowerLimit);
		randomOutputInt = randomOutputInt + lowerLimit;
	return	randomOutputInt;
}

double randomFloats(float lowerLimit , float upperLimit)
{
	srand (time (0));
	float r3 = lowerLimit + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(upperLimit-lowerLimit)));
	return r3;
}

void randomString(int stringLength)        //func for generating random string 
{
	system("cls");
	int lowerLimit = 33;
	int upperLimit = 126;
	int randumNum = 0;
	for(int i=0 ; i<stringLength ; i++)
	{
	randumNum = randomNumber(lowerLimit , upperLimit);
	char a;
	a = randumNum;
	cout<<a;
	}	
}


















int main()
{
	
	//FONT SIZE CHANGE 
		CONSOLE_FONT_INFOEX cfi;
		cfi.cbSize = sizeof(cfi);
		cfi.nFont = 0;
		cfi.dwFontSize.X = 0;                   // Width of each character in the font
		cfi.dwFontSize.Y = 24;                  // Height
		cfi.FontFamily = FF_DONTCARE;
		cfi.FontWeight = FW_NORMAL;
		std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
		SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	
	
	
	long int integerPart=0 , decimalPart=0;
	int choice , stringLength;
	
	long int lowerLimitI , upperLimitI ;
	float lowerLimitF , upperLimitF ;

	long int randomOutputInt;

	int temp0 = 1;

	
	
	while(1)							//techincally infinite loop
	{
		srand (time (0));           //algorithm for the absolute degree of randomness
		if(temp0==(1))
		{
			here : ;       //goto statement 
			system("cls");
			
				
				cout<<"\n		random string                - 1";
				cout<<"\n		random number                - 2";
				cout<<"\n		random floating point number - 3";
				cout<<"\n\nEnter your choice = ";
				cin>>choice;
				if(choice==1)
				{
					system("cls");
					cout<<"Enter the string length required - ";
					cin>>stringLength;
					randomString(stringLength);
				}
				else
				if(choice==2)
				{
					system("cls");
					cout<<"\n\nEnter the lowerLimit - ";
					cin>>lowerLimitI;
					cout<<"\nEnter the upperLimit - ";
					cin>>upperLimitI;
				}
				else
				if(choice==3)
				{
					system("cls");
					cout<<"\n\nEnter the lowerLimit - ";
					cin>>lowerLimitF;
					cout<<"\nEnter the upperLimit - ";
					cin>>upperLimitF;
					
				}
				else
				{
					system("cls");
					cout<<"wrong input";
					getch();
					goto here;
				}
		}
		
		
		
		
		
		//generating result
		if(choice==1)
		{
			system("cls");
			srand (time (0));
			randomString(stringLength);
			getch();
		}
		else
		if(choice==2)
		{
			
				srand (time (0));
		long int randumNum = randomNumber(lowerLimitI , upperLimitI);
				system("cls");
				cout<<"random number generated = ";
				cout<<randumNum<<endl;
				getch();
		}
		else
		if(choice==3)
		{ 
				srand (time (0));
				system("cls");
				float result;
				result = randomFloats(lowerLimitF , upperLimitF);
				
				long int randumNum = randomNumber(int(lowerLimitF) , int(upperLimitF));
				float result1 = result + randumNum;
				if(result1>=upperLimitF)
				{
					result1=0;
				}
				else
				{
					result = result1;
				}
				
				cout<<"random number generated = ";
				cout<<result<<endl;
				getch();
		}
		
		
		
		//asking for repeatation of he process 
		system("cls");
		cout<<"Enter - \n[-1 for exist]\n[0 for repeat]\n[1 for changing parameters]\n : ";
		cin>>temp0;
		if(temp0==0)
		{
			continue;
		}
		else
		if(temp0==(-1))
		{
			break;
		}
		else
		if(temp0==(1))
		{
			continue;
		}
		else
		{
			system("cls");
			cout<<"system error - ";
			getch();
			exit(1);
		}
	}
	system("cls");
	return 0;
}
