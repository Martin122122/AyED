#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    const float pi=3.141592;
    float cal=0;
    int iter=0; 
    float aux=0;


    while (aux!=pi/4)
    {
        cal=pow(-1,iter)/((2*iter)+1);
        aux+= cal;
        iter ++;
    }

    cout << fixed;
    cout.precision(6);
    
    cout<<"Se calculo PI= "<<aux*4<<" en "<<iter<<" iteraciones"<<endl;

    return 0;
}
