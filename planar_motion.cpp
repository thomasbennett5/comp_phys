#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    double x0, y0, R, x,y,vx,vy,t,t0,t_final,dt;
    double theta, omega;
    double PI = 2*acos(0.0);
    string buf, buf2, buf3;

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
    
    cout << "# t0= " << t0 << " tf = " << t_final << " dt= " << dt << endl;

    if ( R <=0.0) { cerr << "Illegal value R    \n";
            exit(1);}
    if(omega<=0.0){cerr << "Illegal value i    \n"; exit(1);}
            exit(1);
    cout  << "# T = " << 20*PI/omega;










    

    return 0;
}
