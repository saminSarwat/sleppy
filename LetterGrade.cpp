#include <iostream>
using namespace std;
int main() {
    double mark;
    cout << "Enter your marks" <<endl;\
   cin >> mark;
    if(mark>100){
        cout << "Invalid marks";
    }
    else if(mark<0){
        cout << "Invalid marks";
    }
    else if(mark>=90){
        cout << "A+";
    }
    else if(mark>=80){
        cout << "A-";
    }
    else if(mark>=70){
        cout << "B+";
    }
    else if(mark>=60){
        cout << "B-";
    }
    else if(mark>=40){
        cout << "C";
    }
    else{cout<< "FAIL"<<endl;
        cout<<"Better luck next time";
    }

}
