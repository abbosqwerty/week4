#include <chrono>
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

/* Problem #10

int main() {
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    switch(c) {
        case 'g':
            cout<<"Goo";
            break;
        case 'y':
            cout<<"Get ready";
            break;
        case 'r':
            cout<<"Stop";
            break;
        default:
            cout<<"Wrong input";
    }
}
*/


/* Problem #11

int main() {
        int n;
    cout << "Enter the student score (0-100): ";
    cin >> n;
    switch(n/10) {
        case 10:
        case 9:
            cout <<"A";
            break;
        case 8:
            cout <<"B";
            break;
        case 7:
            cout <<"C";
            break;
        case 6:
            cout <<"D";
            break;
        default:
            cout <<"F";
    }
} */

/* Problem 12

int main() {
    int x, y,z;
    cout << "Please enter each angles of triangel: " ;
    cin >> x >> y >> z;
    switch (x+y+z) {
        case 180:
         cout <<"the triangle is valid";
        break;
        default:
            cout <<"the triangle is not valid";
    }
} */


/* Problem 13

int main() {
    double a, b, c;
    cout << "Please enter the first number: ";
    cin >> a;
    cout << "Please enter the second number: ";
    cin >> b;
    cout << "Please enter the third number: ";
    cin >> c;
    double dis = (b * b) - (4 * a * c);
        double x1 = (-b + sqrt(dis)) / (2 * a);
        double x2 = (-b - sqrt(dis)) / (2 * a);
        cout <<"x1 = "<< x1 << endl;
        cout <<"x2 = "<< x2 << endl;

} */

/* Problem 14

int main() {
    char c;
    cout << "Please enter a character: ";
    cin >> c;
    if(c >= 'a' && c <= 'z') {
        cout <<"Lowercase Alphabet";

    }
    else if(c >= 'A' && c <= 'Z') {
        cout <<"Uppercase Alphabet";

    }
    else {
        cout <<"it is not an alphabet";
    }
} */

/* Problem 15

int main() {
    double x,y,z,u;
    cout << "Enter weight and price for package";
    cin >> x >> y;
    cout << "Enter weight and price for 2nd package";
    cin >> z >> u;
    if (x/y > z/u) {
        cout << "Package 1 has better price";
    }
    else if (x/y < z/u) {
        cout << "Package 2 has better price";
    }
    else {
        cout << "two packages have the same price";
    }

} */

/* Problem 16

int main() {
      int x,y,z, num;
    cout << "Enter a three-digit integer";
    cin >> num;
    x = num % 10;
    z = (num / 10) % 10;
    y = num / 100;
    if (x == y) {
        cout << num <<" is  a palindirome";
    }
    else {
        cout << num <<" is not a palindirome";
    }


} */
/* Problem 17

int main() {
    char greet;
    cout<< " Enter character to greets ";
    cin >> greet;
    switch (greet) {
        case 'u':
            cout << "Assalomu Aleykum";
            break;
        case 'e':
            cout << "Hello";
            break;
        case 'r':
            cout << "Zdravstvuyte";
            break;
        case 'g':
            cout << "Hallo";
            break;
        default:
            cout << " I dont know this language";
    }
} */

/* Problem 18

int main() {
    double x,y,d;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    d = sqrt(pow(x,2) + pow(y,2));
    if (d < 10) {
        cout <<" the point ("<<x<<", "<<y<<") is inside the circle"<<endl;
    }
    else if (d == 10 ) {
        cout <<" the point ("<< x<<", "<<y<<") is on the circle"<<endl;
    }
    else {
        cout <<" the point ("<< x<<", "<<y<<") is outside the circle"<<endl;

    }
} */
/* Problem 19
 
int main() {
double gpa;
    cout << "Enter GPA: ";
    cin >> gpa;
    int ran = (int)gpa * 10;
    switch (ran/10) {
        case 4:
            cout <<"You got 80% scholarship";
            break;
        case 3:
            if (gpa >= 3.5) {
                cout <<"You got 60% scholarship";
            }
            else if (gpa >= 3.0) {
                cout <<"You got 50% scholarship";
            }
            else {
                cout <<"no scholarship";
            }
            break;
        default:
            cout <<"No scholarship";
    }
} */
