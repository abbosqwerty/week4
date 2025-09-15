#include <iostream>
using namespace std;
// int main() {
//     /* Selection control Structures if, if-else, nested if-else
//      * if(condition ){it code we write after the condition}
//      * else(we have to not write condition to else ){ there we write code for else }
//      */
// }

/*Problem #1
int main() {
    int x;
    cout << "Please enter a number: ";
    cin >> x;
    if (x>0) {
        cout <<"Your number is positive:";
        return 0;
    }
    else {
        cout << "Your number is negative:";
        return 1;
    }
}*/


/*
Problem #2
int main() {
 int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n%2==0) {
        cout << "The number is even" << endl;
        return 0;

    }
    else {
        cout << "The number is odd" << endl;
        return 0;
    }
}
*/


/* Problem #3
int main() {
    int x,y max;
     cout<<"Enter the value of x: ";
     cin>>x;
     cout<<"Enter the value of y : ";
     cin>>y;
     if(x==y){
           cout << "Numbers are equal" ;
     }
     else if (x>y) {
        max = x;

     }
     else {
         max = y;
         return 0;
     }
       cout<<"Max number is: "<<max<<endl;
}
*/

/* Problem #4
int main() {
    int x,y,z, max;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    cout<<"Enter the third number: ";
    cin>>z;
    if(x>y) {
        if(x>z) {
            max=x;
        }
        else {
            max=z;
        }
    }
    else {
        if(y>z) {
            max=y;
        }
        else {
            max=z;
        }
    }
    cout<<"Max number is: "<<max<<endl;
}
*/

/* Problem #5
int main() {
    int x;
    cout << "Please enter a year: ";
    cin >> x;

    if ( x%4==0) {
        if ( x%100==0) {
            if ( x%400==0) {
                cout<<x<<" is a leap year"<<endl;
            }
            else {
                cout<<x<<" is not a leap year"<<endl;
            }
        }
        else {
            cout<<x<<" is a leap year"<<endl;
        }
    }
    else {
        cout<<x<<" is not a leap year"<<endl;
    }
}
*/

/*Problem #6
int main() {
    int n;
    cout << "Enter your score:";
    cin >> n;
    if (n>=50) {
        cout << "Pass";

    }
    else {
        cout << "Fail";
    }
}
*/

/* Probelem #7
int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;
    if (n>=0) {
        if (n==0) {
            cout << "The number is 0" << endl;
        }
        else {
            cout << "Positive value!";
        }
    }
    else {
        cout << "Negative number!" << endl;
    }

}
*/


/* Problem #8
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
     int ab = (n)? -n : n;
    cout <<"the absolute value is: " << ab << endl;
}
*/

/* Problem #12
int main() {
    int n;
    cout << "enter your score:";
    cin >> n;
    if (n>=60) {
        if (n>=70) {
            if (n>=80) {
                if (n>=90) {
                    cout <<"Your grade is A";
                }
                else {
                    cout <<"Your grade is B";

                }
            }
            else {
                cout <<"Your grade is C";
            }
        }
        else {
            cout <<"Your grade is D";
        }
    }
    else {
        cout <<"Your grade is F";
    }
}
*/


/* Problem #16
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n%3 == 0 && n%5 == 0) {
        cout << "Divisible by both" << endl;
    }
    else {
        cout << "Not divisible by both" << endl;
    }
}
*/


int main() {
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
   int rem = a%b;
   if (b==0) {
       cout <<"Number a is  not devisibel by number b";
   }
    else {
        cout <<"Number a is  devisibel by number b" <<" and remineder is: " <<rem;
    }

}