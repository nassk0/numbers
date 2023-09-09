#include <iostream>

using namespace std;

int main()
{
    int  m, n = 200;
    for (int i = 2; i<n; i++)
    {
        m = true;
        for (int j = 2; j < i; j ++)
        {

                if (i % j == 0)
                {
                    m = false;
                    break;

                }


        }
        if (m)
            cout << i << endl;

    }

}
