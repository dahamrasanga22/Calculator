#include<iostream>
using namespace std;
 
 
 int main(){
 	int choice;                      /// select
 	int num1, num2;                  /// input
 	bool running = true;             /// loop
 	int answer;
 	
 	/// DISPLAY CALCULATER TEXT
 	cout << "--------------------------------------\n";
 	cout << "         C A L C U L A T O R          \n";
	cout << "--------------------------------------\n";


	/// loop - menu display
	while (running){
		
		cout << "Select Option:\n";
	    cout << "1. ADDITION\n";
	    cout << "2. SUBTRACTION\n";
	    cout << "3. MULTIPLICATION\n";
	    cout << "4. DIVISION\n";
	    cout << "5. EXIT\n";
	    cout << "----------------------------------------\n";
	    cout << "Enter your Option ( 1 , 2 , 3 ,4 , 5 ):";
	    cin  >> choice;
	
	
	///  USER INPUT
	if (choice == 5){
		cout << "\nEXIT the Program\n";
		running = false;
		break;
	}
	
	
	// OPERAND INPUT
	cout << "Enter First Number: ";
	cin >> num1;
	cout << "Enter Second Number: ";
	cin >> num2;
	
	switch (choice){
		/// Addition
		case 1:
			answer = num1 + num2;
			cout << "Answer:" << answer << endl;
			cout << "========================================\n";	
			break;
			
		/// Subtraction
		case 2:
			answer = num1 - num2;
			cout << "Answer:" << answer << endl;
			cout << "=======================================-\n";	
			break;
		
		/// Multiplication
		case 3:
			answer = num1 * num2;
			cout << "Answer:" << answer << endl;
			cout << "========================================\n";	
			break;
		
		/// ERROR HANDLING
		/// Division
		case 4:
			if (num2 == 0){
				cout <<"Error:Cannot divide by zero" << endl;
				cout << "========================================\n";	
			}
			
			else{
			answer = num1 / num2;
			cout << "Answer:" << answer << endl;
			cout << "========================================\n";	
			break;
         
      /// SELECT NUMBER BETWEEN 1-5
      default:
     		 cout <<	"    Please Select a number BETWEEN 1 and 5    < endl;
	    }	
		
	 
    }
    return 0;
}