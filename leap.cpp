#include <iostream>
# include <iostream> 
# include <cmath> 
# include <cstring> 
using namespace std;

int Zellercongruence(int day, int month, int year) 
{ 
	if (month == 1) 
	{ 
		month = 13; 
		year--; 
	}	 
	if (month == 2) 
	{ 
		month = 14; 
		year--; 
	} 
	int q = day; 
	int m = month; 
	int k = year % 100; 
	int j = year / 100; 
	int h = q + 13*(m+1)/5 + k + k/4 + j/4 + 5*j; 
	h = h % 7; 
	switch (h) 
	{ 
		case 0 : cout << "Saturday "; break; 
		case 1 : cout << "Sunday "; break; 
		case 2 : cout << "Monday "; break; 
		case 3 : cout << "Tuesday "; break; 
		case 4 : cout << "Wednesday "; break; 
		case 5 : cout << "Thursday "; break; 
		case 6 : cout << "Friday "; break; 
	} 
	return 0;
} 

int main()
{
    int year;
	int day;
	int month;
	
    cout << "Enter year: ";
    cin >> year;
	
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                {
				cout << year << " is a leap year and the day is ";
				Zellercongruence(29,2,year); 
				}
            else
               {
				 cout << year << " is not a leap year.";
				 
				 if((year-2) % 4 == 0 && (year+2) % 4 == 0)
       				{	
						cout<<"Year is Equidistant and the days for them are ";
						Zellercongruence(29,2,year-2);
						Zellercongruence(29,2,year+2);
       				}
       		
              else if(year % 4 == 1)
                {
				year = year - 1;
                cout<<"Closest year is "<<year;
                cout<<Zellercongruence(29,2,year);
         		}
         		else if(year % 4 == 3)
         		{
				 year = year + 1;
         		cout<<"Closest year is "<<year;
         		cout<<Zellercongruence(29,2,year);
         		}
         	}
        }
        else
            {
			 cout << year << " is a leap year and the day is ";
			Zellercongruence(29,2,year); 
			}
    }
    else
       {
		 cout << year << " is not a leap year.";
       	 
		if((year-2) % 4 == 0 && (year+2) % 4 == 0)
       	{
			cout<<"Year is Equidistant and the days for them are ";
			Zellercongruence(29,2,year-2);
			Zellercongruence(29,2,year+2);
       	}
       		
		else if(year % 4 == 1)
                {
				year = year - 1;
                cout<<"Closest year is "<<year<<" and the day is ";
                Zellercongruence(29,2,year);
         		}
         		else if(year % 4 == 3)
         		{
				 year = year + 1;
         		cout<<"Closest year is "<<year<<" and the day is ";
         		cout<<Zellercongruence(29,2,year);
         		}
    	}	
	return 0;
}
