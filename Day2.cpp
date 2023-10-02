// End on 4 hours...............................




//braced initilization
#include <iostream>
using namespace std;

int main() {
    int random_num;  //contain garbage value
    int num{};  //contain 0 value
    int num1{ 5 }; //intilize value
    
    //can use expression as initilizer

    int involving_num{ num + num1 };

    //vlue in braces

    int value(2.8); //it will only store 2

    //now we will check the size of int value
    cout << "Size of int ; " << sizeof(int) << endl;
    cout << "Size of num1 :" << sizeof(num1);



}
//same we will do for bracket in which decimal value will be shown but the value after point will not shown.


/*
 
 //check the sice of given values
  signed int valuel (10);
signed int value2 (-300);
td::cout << "valuel : " << valuel << std::endl;
std::cout << "value2 : " << value2 << std::endl;
std::cout << "sizeof(valuel) : " << sizeof(valuel) << std::endl
td::cout << "sizeof(value2) : " << sizeof(value2) << std::endl.



unsigned int value3 (4);   // in unsigned we only can put positive numbers
unsigned int value4(-5);   // compiler error


*/
//number system 
/*
#include <iostream>
using namespace std;

int main()
{
    int number1 = 15;    //decimal
    int number2 = 017;   //octal
    int number3 = 0x0f;  //hex
    int number4 = 0b00001111;  //binary

    //The value of all these number are 15 that are written in different number system.

    cout << "Number in decimal form is :" << endl;
    cout << "Number1 is " << number1<<endl;
    cout << "Number2 is " << number2<<endl;
    cout << "Number3 is " << number3<<endl;
    cout << "Number4 is " << number4;
    system("pause>0");
   


}
*/
//by using variable in program that are not declared , compiler will genrate error for that program........
//variabile must be decleared
//if we dont give any value it will assign 0
//such AS  int value{}; it will give it value of 0



//we will describe the number of bytes use in given value
/*
    #include<iostream>
    using namespace std;
    int main(){
    
               short short_var (-32768) ; // 2 Bytes
               short int short_int (455) ; //
               signed short signed_ short (122); //     
               signed short int signed_short_int (-456); /
               insigned short int unsigned short_int (456):
               int int_var (55) ; // 4 bytes
               signed signed var (66);//
               signed int signed_int (77);//
               unsigned int unsigned int(77);
               long long_var (88); // 4 OR 8 Bytes
               long int long_int (33);
               signed long signed long (44);
               signed long int signed long_ int (44);
               unsigned long int unsigned_ long_int(44);
               long long longllong (888);// 8 Bytes
               long long int long_long_int (999);
               signed long long signed_long_long (444);
               signed long long int signed_long_long_int(1234).
               insigned iong long int unsigned_long_long_int(1234)


               // simply we will cout by usin keyword of sizeof () ;
               
               cout<<"size is  "<< sizeof (short_var);
    
    
    
    
    
    
    
    }


*/
// for representing float data we will we will use float datra type
//to represent power in a value we will use scientific notaion 
//such  2.95e8    is a scientific notation
//dividing floating number to 0 will give us infinity
//and dividing 0 by 0 we will have 0 or nan value

/*

               double number10 {5.6 };
               double number11{};        //Initialized to 0
               double number12{}; //Initialized to 0
               //Infinity
               double result { number10 / number11};
               cout << number10 << "/" << number11 << " yields " << result. << endl;
               cout << result << " + " << number1o << " yields " << result + number10 << endl
               //NaN
               result = number11/number12;
               cout << number11 <<"/" <<number12 <<result << endl;

*/

