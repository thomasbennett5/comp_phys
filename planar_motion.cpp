#include <math.h>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    double x0, y0, R, x,y,vx,vy,t,t0,t_final,dt;
    double theta, omega;
    string buf;

    cout << "# Enter omega: \n";
    cin >> omega;
    getline(cin,buf);
    cout << "#Enter center of circle ( x0 , y0 ) and radius R: \n";
    
    cin >> x0 >> y0 >> R;
    getline(cin,buf);

    cout << "# Enter t0, t_final, dt : \n";
    cin >> t0 >> t_final >> dt;
    getline(cin, buf);
    

    cout << "# omega = " << omega << endl;
    cout << "# x0    = " << x0 << " y0= " << y0
            << " R = " << R << endl;
    
    cout << "# t 0= " << t0 << " t f = " << t_final << " dt= " << dt << endl;







    

    return 0;
}
