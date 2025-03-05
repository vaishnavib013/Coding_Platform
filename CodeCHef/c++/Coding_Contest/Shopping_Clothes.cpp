 #include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x,y,z,a,b,c;
        cin >> x >> y >> z >> a >> b >> c;
        
        int xl=0, l=0, s=0;

        if (z>c) {
            xl = c;
            z -= c;
            c = 0;
        }
        else {
            xl = z;
            c -= z;
            z = 0;
        }
        if (y>b) {
            l=b;
            y-= b;
            b = 0;
        } 
        else {
            l = y;
            b -= y;
            y = 0;
        }
         if (x>a) {
            s = a;
            x -= a;
            a = 0;
        }
        else {
            s = x;
            a -= x;
            x = 0;
        }

        if (z > 0 and b > 0) {
            if (z > b) {
                l += b;
                z -= b;
                b = 0;
            } 
            else {
                l+=z;
                b -= z;
                z = 0;
            }
        }
        
       

        if (y > 0 and a > 0) {
            if (y > a) {
                s += a;
                y -= a;
                a = 0;
            } 
            else {
                s += y;
                a -= y;
                y = 0;
            }
        }
        

        if (z > 0 and a > 0) {
            if (z>a) {
                s += a;
                z -= a;
                a = 0;
            }
            else {
                s += z;
                a -= z;
                z = 0;
            }
        }

        int total = xl + l + s;
        cout << total << endl;
    }
    
    return 0;
}
