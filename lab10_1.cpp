#include<iostream>
#include<string>
using namespace std;

int main(){
    string grade;
    //Declare array count for counting A,B,C,D,F and initialize all element = 0
    int N=1;
	int count[5] = {0, 0, 0, 0, 0}; 
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n" ;
	do{
		cout << "Student [" << N << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == "A"){ // if grade is A
            count[0]++; N++;
		}else if(grade == "B"){ // if grade is B
			count[1]++; N++;
        }else if(grade == "C"){
            count[2]++; N++;
        }else if(grade == "D"){
            count[3]++; N++;
        }else if(grade == "F"){
            count[4]++; N++;
		}else if(grade != "0"){ 
            cout << "Wrong input. Please input again.\n" ;
		} 
        
	} while(grade != "0");
	
	
	cout << "In total " << N-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
    cout << "C = " << count[2] <<", ";
    cout << "D = " << count[3] <<", ";
    cout << "F = " << count[4] ;
		
	
	return 0;
}
