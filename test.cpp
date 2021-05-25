/*WAP to illustrate how the constructors are implemented and the order in which they are called when the classes are inherited. Use three classes named alpha, beta, gamma such that alpha, beta are base class and gamma is derived class inheriting alpha &beta. Pass four variable to gamma class object which will further send one integer variable to alpha(),one float type variable to beta().Show the order of execution by invoking constructor of derived class.*/

//TODO Solution

#include <iostream>
using namespace std;

//! class alpha(base)
class alpha
{
    int w;

public:
    alpha(int i)
    {
        w = i;
        cout << "Alpha Created" << endl;
    }

    void disp_w(void)
    {
        cout << "w= " << w << endl;
    }
};

//! class beta(base)
class beta
{
    int x;

public:
    beta(int j)
    {
        x = j;
        cout << "Beta Created" << endl;
    }

    void disp_x(void)
    {
        cout << "x= " << x << endl;
    }
};

//! class gamma(inherit  alpha and beta)
class gamma : public alpha, public beta
{
    int y, z;

public:
    gamma(int a, int b, int c, int d) : alpha(a), beta(b)
    {
        y = c;
        z = d;

        cout << "Gamma created" << endl;
    }

    void disp_yz(void)
    {
        cout << "y= " << y << endl
             << "z= " << z << endl;
    }
};

//! main function
int main()
{
    gamma smthing(10, 11, 12, 7965);

    smthing.disp_w();
    smthing.disp_x();
    smthing.disp_yz();

    return 0;
}