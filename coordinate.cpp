#include<iostream>
using namespace std;

class Point {
    private:
        int x;
        int y;
    public:
        void SetCoordinates();
        void DisplayCoordinates();
        Point();
};

void Point::SetCoordinates() {
    cout << "\nEnter the X-coordinate of the point: ";
    cin >> x;  
    cout << "\nEnter the Y-coordinate of the point: ";
    cin >> y; 
}

void Point::DisplayCoordinates() {
    cout << "\nThe X-coordinate is: " << x;
    cout << "\nThe Y-coordinate is: " << y;
}

Point::Point() {
    x = 0;  
    y = 0;  
}

int main() {
    Point p1,p2;
    p1.SetCoordinates();  
    cout << "\nThe coordinates of point p1 are: ";
    p1.DisplayCoordinates();  
    cout << endl;
    
    return 0;
    
}

