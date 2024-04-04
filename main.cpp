#include <iostream>
#include <vector>

using namespace std;

int main()
{
    bool found = true;
    int age = 20;
    double hours = 45.30;
    int count = 20;
    double overTime = 15;
    char ch = 'B';


    cout << !found << endl;
        /*  the result is zero because !found is false.
            false = 0 and true = 1
        */


    cout << (hours > 40) << endl;
        /*  the result one because  hours > 40 is true.
            false = 0 and true = 1
        */


    cout << (found && (age >= 18)) << endl;
        /*  the result is one because found is true
            also (age >=18) is true. therefore true && true
            evaluate true.
        */


    if (hours > 49) {

        cout << "you are up for promotion" << endl;
    }
    else {

        cout << "no promotion" << endl;

    }
    /*  the if statement evaluates whether hours is less than 49.
        and if the expression is true then it prints "up for promotion"
        else "NO promotion"
        */

 if (hours > 40 && age > 25 || overTime > 10) {

    cout << "eligible for general manager position" << endl;
 }
 else {

    cout << "cannot be general manager!" << endl;
 }
        /* evaluates like this :
            (true && false) || true
            false || true
            true
            therefore prints statement 1

        */

    return 0;
}
