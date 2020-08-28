//SANJIDA NISHA 

#include <iostream> 
#include <string>
using namespace std;

class Employee{
	//attributes 
		//data member- holds employees 5 product sales 
	int sales[5]; 

public: 

	//member that reads 5 integers and saves them to sales 
	void input()
{
for (int i = 0; i < 5; i++) {

cin >> sales[i];

while (sales[i] < 0 || sales[i] > 50) {
cerr<< "Invalid input. Please enter a number between 0 and 50." << endl;

cin >> sales[i];
}

}

}
	// function that returns the sum of the emplyee's sales 
	int calculateTotalSales() 
	{
		int sum = 0;
		for(int i =0; i < 5; i++)
			sum += this-> sales[i];
		return sum; 
		
	}
	
};

int main()
{
	Employee Jack;
	cout << "enter jacks's 5 sales: ";
	//read jack's sales from users 
	Jack.input();
	Jack.calculateTotalSales();

	cout << "enter number of employees between 1 and 100: ";
	int n;
	//read number of employess 
	
	cin >> n; 

	if (n >=1 && n<=100){


//read sales of n employees 
		Employee data[n];
		for (int i = 0; i < n; i++){
			cout << "enter sales of employees: " << i+1<<":";
			data[i].input();
			data[i].calculateTotalSales();
			
		}
		int count = 0; 
		for(int i = 0; i<n; i++){
			if (data[i].calculateTotalSales() > Jack.calculateTotalSales())
			count++; 
		}
			cout <<"Number of employees whose sales are greater than Jack: "<<  count<< endl; 
		}
	}
	
	


	
