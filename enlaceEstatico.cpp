// programa en C++ para ilustrar el concepto de enlace estático
#include <iostream>
using namespace std;
 
class sumas
{
    public:
 
    int suma(int x, int y) {
        return x + y;
    }
 
    int suma(int x, int y, int z) {
        return x + y + z;
    }
};
 
int main()
{
    sumas s;
    cout << "Resultado = " << s.suma(10, 20) << endl;
    cout << "Resultado = " << s.suma(10, 20, 30) << endl;
 
    return 0;
}