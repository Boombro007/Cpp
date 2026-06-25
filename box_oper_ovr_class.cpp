#include <iostream>
using namespace std;

class Box {
    private:
    int l;
    int b;
    int h;
    public:
    Box(int l1,int b1,int h1)  
    {
        l = l1;
        b = b1;
        h = h1;
    }
    Box() 
    {
        l = b = h = 0;
    }
    Box(const Box& other) 
    {
       b = other.b;
       l = other.l;
       h = other.h;
    }
    int getLength()
        { return l; }
    int getBreadth()
        { return b; }
    int getHeight()
        { return h; }
    long long CalculateVolume() const {
        return (long long)l * b * h;
    }
    bool operator<(const Box& other) const {
        if (l < other.l) {
            return true;
        } else if (l == other.l) {
            if (b < other.b) {
                return true;
            } else if (b == other.b) {
                return h < other.h;
            }
        }
        return false;
    }
    friend std::ostream& operator<<(std::ostream& out, const Box& B) {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};
int main() {
    Box b1(3, 4, 6);
    Box b2(2, 3, 4);
    cout << "Box 1: " << b1 << endl;
    cout << "Box 2: " << b2 << endl;
    if (b1 < b2) {
        cout << "Box 1 is smaller than Box 2" << endl;
    } else {
        cout << "Box 1 is not smaller than Box 2" << endl;
    }
    return 0;
}