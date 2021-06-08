#include <iostream>

using namespace std;

#include <iostream>
using namespace std;


//2. Program to print following pattern:Input:- 5
//in this problem we print upper half first and then lower half (left then space then right) row by row
//given n=5;
//prasanna garole
int main()
{
    int r,i,j;
    r=5;


  for(i=1;i<=r;i++)
  {
    for(j=1;j<=i;j++)
    {
        cout<<"*";
    }//upper row left star

        for(j=1;j<=2*(r-i);j++)
        {
            cout<<" ";
        }//upper row space

            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }// upper row right star

    cout<<"\n";
  }

  for(i=r;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
        cout<<"*";
    }//lower row left star

        for(j=1;j<=2*(r-i);j++)
        {
            cout<<" ";
        }//lower row space

            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }//lower row right star

    cout<<"\n";
  }

return 0;
}
