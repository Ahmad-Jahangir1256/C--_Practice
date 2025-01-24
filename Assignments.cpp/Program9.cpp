#include <iostream>
using namespace std;
int main() 
{
    int i, j, sum = 10;
    for (i = 0; i < 5; i++) 
    {                    // this outer loop runs 5 times since it starts with 0 and goes to 4
        if (i % 2) 
        {                             // here it's checked if the number is even or odd.
            for (j = 0; j <= 3; sum += j, j++);  /* this condition is fulfilled if i is odd which is 1 and 3
                                                In the first iteration sum=16 then sum=17 then sum=19 then sum=22 then
                                                this loop will be exited and i will become 2 */
        }
    else 
    {
        for (j = 3; j > 0; sum += j, j--);   /* this condition is fulfilled if i is even which is 0, 2, 4
                                                In the first iteration sum=13 then sum=15 then sum=16 and then
                                                loop will be exited and i will become 1 */
    }
    }
    cout << sum;
    return 0;
}