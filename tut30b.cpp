#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        friend int distance(Point p, Point q);

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};

int distance(Point p, Point q )
{
    int c;
    c = (pow(p.x-q.x ,2))+(pow(p.y-q.y, 2));
    return sqrt(c);
}

int main(){
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();

    cout<<"dis is   "<<distance(p,q);
    return 0;
}
