// Class test //
// CAMT403: Introduction into Programming //
// Coding by Chris Morgan //
//

#include <iostream>
#include <array>
#include <cmath>   //Question Six //
#include <climits> // Question Five //
using namespace std;

// QUESTION ONE Double a number //

int plusFuncInt(int x, int y) {
    return x + y;
}

double plusFuncDouble(double x, double y) {
    return x + y;
}

int main()
{
    int myNum1 = plusFuncInt(8, 5);
    double myNum;2 = plusFuncDouble(4.3, 6.26;
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;
    
}

// QUESTION TWO Double a number by reference //



void duplicate (int& a, int& b, int& c)
{
    a*=2;
    b*=2;
    c*=2;
}

int main ()
{
    int x=1, y=3, z=7;
    duplicate (x, y, z);
    std::cout << "x=" << x << ", y=" << y << ", z=" << z;
    

}

// QUESTION THREE Area of Rectangle  //



int area(int);
int area(int,int);
float peri(float);
float peri(float,float);
int main()
{
    int side, length, breadth;
    
    cin>>side;
    cout<<"\n Enter Length and Breadth of Rectangle : ";
    cin>>length>>breadth;
    
    cout<<"\n Area of Rectangle : "<<area(length,breadth);
    
    cout<<"\n Perimeter of Rectangle : "<<peri(length,breadth);
}
int area(int )
{
    return(s*s);
}
int area(int l,int b)
{
    return(l*b);
}
float peri(float s)
{
    return(4*s);
}
float peri(float l,float b)
{
    return(2*(l+b));
}




// QUESTION FOUR Area of a Square //


//funcion to calculate area of square //
int area(int side){
    int area = side * side;
    return area;
}
// Driver Code
int main(){
    int side = 60;
    cout <<"area of square is :"<<area(side);
    
    
}

// QUESTION FIVE Smallest value in an array //


int main ()
{
    const int = 10;
    int array []= {4,2,3,1,5,};
    
    //For loop
    int smallest = array[0] ;
    for ( int i=1;  i < sizeof(array)/sizeof(array[0]);  ++i )
        if ( array[i] < smallest )
            smallest = array[i] ;
    
    std::cout << smallest << '\n' ;
    
   
}







// QUESTION SIX Power of a signal //

// Function to Calculate Root Mean Square //
float rmsValue(int arr[], int n)
{
    int square = 0;
    float mean = 0.0, root = 0.0;
    
    // Calculate square.
    for (int i = 0; i < n; i++) {
        square += pow(arr[i], 2);
    }
    
    // Calculate Mean.
    mean = (square / (float)(n));
    
    // Calculate Root.
    root = sqrt(mean);
    
    return root;
}

// Driver code
int main()
{
    int arr[] = { 10, 4, 6, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << rmsValue(arr, n);
    
    
}




// QUESTION SEVEN Sort an array //


void printarray (int arg[], int length) {
    for (int n=0; n<length; n++)
        cout << arg[n] << " ";
    cout << "\n";
}

//function should sort the array into numerical order, with the lowest number first and the highest number last. Pass the array by reference.
int main(void)
{
    int firstarray[] = {1, 2, 3, 4, 5};
    int secondarray[] = {6, 7, 8, 9, 10};
    printarray (firstarray,5);
    printarray (secondarray,5);
    
}




// QUESTION EIGHT FizzBuzz //

int main(void);

    int i;
    for (i=1; i<=100; i++)
    {
        // number divisible by 3 and 5 will
        // always be divisible by 15, print
        // 'FizzBuzz' in place of the number
        if (i%15 == 0)
            std::cout << "FizzBuzz\n";
        
        
        // number divisible by 3? print 'Fizz'
        // in place of the number
        else if ((i%3) == 0)
            std::cout << "Fizz\n";
        
        // number divisible by 5, print 'Buzz'
        // in place of the number
        else if ((i%5) == 0)
            std::cout << "Buzz\n";
        
        else // print the number
            std::cout << i << "\n";
        
    
    
    return 0;
}




