#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    while(1){
        cin >> num;
        if(num == 0){
            break;
        }
        string number;
        string number_reverse;
        number = to_string(num);
        number_reverse = number;
        reverse(number_reverse.begin(), number_reverse.end());
        if(number.compare(number_reverse) == 0){
            cout << "yes" << "\n";
        }
        else{
            cout << "no" << "\n";
        }
    }



}