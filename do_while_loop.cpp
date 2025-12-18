#include <iostream>
using namespace std;

int main()
{
    int a = 3;
//executes statement before condition(testing) then, an increment if true, then statement again.
    do
    {
        cout << "a is; " << a << endl;
        a++ ;
    }
    while( a < 10 );

    return 0;
}
