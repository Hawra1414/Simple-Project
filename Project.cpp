#include <iostream>
#include<cmath>
using namespace std;
/* IAU students 
“COMP209”: 
1-Introduction to Programming
2-Hardy Ramanujam Theorem
3- Euclidean algorithms (Basic and Extended)
Project 
group 2 
...........................................
Names: 
Sarah Nasser Al Sulays
kawther saleh Alkhalifah
Aqilah Abdullah lajami
Roaa Habib Almuhandir
Hawra Khalid Alghrash
Taif Khalid Alsaeed
*/

// USER-DEFINED FUNCTIONS 

void menu() // // function for the menu

{ 
    cout<<"Please choose from the menu: \n"<<"1: Lagrnge's Four Square Theorem \n"<<
         "2: Hardy Ramanujam Theorem \n"<<"3: Enclidean algorithms(Basic and Extended) \n";
}

void function(int Number) // function for program 1
{

	for (int num1 = 0; pow(num1,2)  <= Number; num1++) {
	for (int num2 = num1; pow(num2,2)  <= Number ; num2++) {
			for (int num3 = num2; pow(num3,2)  <= Number; num3++) {
	for (int num4 = num3; pow(num4,2)  <= Number; num4++) {

	if (pow(num1,2)  +  pow(num2,2)  +  pow(num3,2)   +   pow(num4,2)  == Number) 
	{

	cout <<"\n"<< Number << " = " << num1 << "*" << num1 << " + " << num2 << "*" << num2 << " + ";
						cout << num3 << "*" << num3 << " + " << num4 << "*" << num4<< "\n";
		}
		}
	}
	}
	}
}

int PrimeFactor(int IntegralNumber)  // function for program 2
{
   int count=0;
   if (IntegralNumber%2==0)
   {
       count++;
       while(IntegralNumber%2==0)
       IntegralNumber=IntegralNumber/2;
   }
     
    for(int i=3; i<=IntegralNumber; i+=2)
      if(IntegralNumber%i==0)
    {
        count++;
        while(IntegralNumber%i==0)
        IntegralNumber=IntegralNumber/i;
       }
    
    {
        
    if( IntegralNumber>=2)
    count++;
    return count;
    }
}

int gcd(int a, int b) // function for program 3
{
if (a == 0)
 return b;
return gcd(b % a, a);
}

// main program 

int main()
{  char res; //for user response[y/n]
 char choice;
 int  Number,n,A,B ;

do{

  menu();
  cin>> choice;
    	
    	// Lagrange's Four Square Theorem
      if(choice=='1'){
 cout<< "Lagrange's Four Square Theorem \n \n   Please enter the integer number: ";

cin>>Number;

cout<< " This is all the possible value for summation of four numbers equal to " <<n ; 

function(Number) ;} // to call our function
          
     
//Hardy Ramanujam Theorem 
else if (choice=='2'){
     int n;
     cout<<" Please enter the integer number: ";
     cin>>n;
     cout<<"The number of prime factors of intgral number:"<<PrimeFactor(n)<<"\n";
     cout<<"The value of log(log(n)):"<<log(log(n));}

  
  
  // Euclidean algorithms (Basic and Extended)
 else if  (choice=='3'){
  cout << " Euclidean algorithms (Basic and Extended) \n \n Enter two numbers that you want to have the greatest common denominator"<< endl;
 cin>> A >>B;
 cout << "\nGCD(" << A << ", " << B << ") = " << gcd(A,B); }



 cout<<"\n \n do you want to use another program from the menu if yes choose y or Y "<<endl;
 cin>> res;
}


 while (res=='Y'||res=='y'); 




 cout<<"thank you <3";


   return 0;}
