// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

string grade [9] = {"A","B+","B","C+","C","D+","D","F","W"};
int main(){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << grade[rand()%9] << " in this 261102.";
}
