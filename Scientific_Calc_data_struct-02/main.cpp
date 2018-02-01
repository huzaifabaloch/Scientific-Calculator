#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;


int RANGE(int r) {

    cout<<endl<<"Enter Your Range "<<'\t';
    cin>>r;

    return r;
}

int Store_The_Range() {

    int storeRange;
    int range;
    storeRange = RANGE(range);
    return storeRange;
}


double Input() {

    double input;
    cin>>input;
    return input;
}


long Addition(int numbers[10]){

    int sum = 0;
    int r;

    r = Store_The_Range();

    for(int i=0; i<r; i++) {

        cout<<endl<<"Number "<<i+1<<"----";
        cin>>numbers[i];
        sum += numbers[i];
    }

    return sum;


}


long Subtraction(int numbers[10]){


    int sum;
    int r;
    int i;

    r = Store_The_Range();

    for(i=0; i<r; i++) {

        cout<<endl<<"Number "<<i+1<<"----";
        cin>>numbers[i];
        sum = numbers[0];
    }

    for(i=1; i<r; i++) {

        sum -= numbers[i];
    }

    return sum;



}


long Multiplication(int numbers[10]){


    int sum = 1;
    int r;
    int i;

    r = Store_The_Range();

    for(i=0; i<r; i++) {

        cout<<endl<<"Number "<<i+1<<"----";
        cin>>numbers[i];
        sum *= numbers[i];
    }

    return sum;


}


double Division(int numbers[10]){


    double sum;
    int r;
    int i;

    r = Store_The_Range();

    for(i=0; i<r; i++) {

        cout<<endl<<"Number"<<i+1<<"----";
        cin>>numbers[i];
        sum = numbers[0];
    }

    for(i=1; i<r; i++) {

        sum /= numbers[i];
    }

    return sum;

}


long Factorial(int number) {

    if(number == 1) {
        return number;
    }

    else {

        return number * Factorial(number-1);
    }
}

void FinalAnswer(double ans)  {

    cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
    cout<<"\t\t\t"<<ans<<endl;
    cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
}

int main()
{

    int userSelection;

    int firstNumber;
    int secondNumber;

    int number[100];

    double Answer;


do{
    cout<<setw(80)<<setfill('=')<<'\n';
    cout<<endl;
    cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
    cout<<"\t\tTOASTER SCI CALCULATOR\n";
    cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';


    cout<<endl<<"\t\t1.  Addition";
    cout<<endl<<"\t\t2.  Subtraction";
    cout<<endl<<"\t\t3.  Multiplication";
    cout<<endl<<"\t\t4.  Division";
    cout<<endl<<"\t\t5.  Power";
    cout<<endl<<"\t\t6.  Square";
    cout<<endl<<"\t\t7.  Cube";
    cout<<endl<<"\t\t8.  Factorial";
    cout<<endl<<"\t\t9.  Floor";
    cout<<endl<<"\t\t10. Ceil";
    cout<<endl<<"\t\t11. Log";
    cout<<endl<<"\t\t12. Sin";
    cout<<endl<<"\t\t13. Cos";
    cout<<endl<<"\t\t14. Tan";
    cout<<endl<<"\t\t15. Square Root"<<endl;
    cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
    cout<<"\t\t16. Exit"<<endl;
    cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
    cout<<endl<<"\t\tSelect Your Operation..";
    cin>>userSelection;
    system("CLS");

    switch(userSelection)  {

    case 1:

        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tADDITON"<<endl;
        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';

        Answer = Addition(number);
        FinalAnswer(Answer);

        break;


    case 2:

        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tSUBTRACTION"<<endl;
        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';

        Answer = Subtraction(number);
        FinalAnswer(Answer);

        break;


    case 3:

        cout<<"\t\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tMULTIPLICATION"<<endl;
        cout<<"\t\t\t"<<setw(25)<<setfill('-')<<'\n';

        Answer = Multiplication(number);
        FinalAnswer(Answer);

        break;

    case 4:

        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tDIVISION"<<endl;
        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';

        Answer = Division(number);
        FinalAnswer(Answer);


        break;



    case 5:

        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tPOWER"<<endl;
        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';

        cout<<endl<<"Enter Your Number And The Power\n";
        firstNumber = Input();
        secondNumber = Input();

        Answer = pow(firstNumber,secondNumber);

        FinalAnswer(Answer);

        break;


    case 6:

        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tSQUARE"<<endl;
        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';

        cout<<endl<<"Enter Your Number For Squaring\n";
        firstNumber = Input();

        Answer = firstNumber * firstNumber;

        FinalAnswer(Answer);

        break;



    case 7:

        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tCUBE"<<endl;
        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';

        cout<<endl<<"Enter Your Number For Cubing\n";
        firstNumber = Input();

        Answer = firstNumber * firstNumber * firstNumber;

        FinalAnswer(Answer);


        break;



    case 8:

        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tFACTORIAL"<<endl;
        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';

        cout<<endl<<"Enter Your Number For Factorial\n";
        firstNumber = Input();

        Answer = Factorial(firstNumber);

        FinalAnswer(Answer);
        break;



    case 9:

        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tFLOOR"<<endl;
        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';

         cout<<endl<<"Enter a Number To Floor";
         firstNumber = Input();

         Answer = floor(firstNumber);
         FinalAnswer(Answer);
         break;



    case 10:

        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tCEIL"<<endl;
        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';

         cout<<endl<<"Enter a Number To Ceil\n";
         firstNumber = Input();

         Answer = ceil(firstNumber);
         FinalAnswer(Answer);;
         break;



    case 11:

        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tLOGARITHM"<<endl;
        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';

        cout<<endl<<"1. Log";
        cout<<endl<<"2. Log10"<<endl;
        cout<<endl<<setw(25)<<setfill('-')<<'\n';
        cout<<"Select Your Choice\n";
        cin>>userSelection;
        switch(userSelection) {

        case 1:

            cout<<endl<<"Enter a Number For Log\n";
            firstNumber = Input();

            Answer = log(firstNumber);

            FinalAnswer(Answer);

            break;

        case 2:

            cout<<endl<<"Enter a Number For Log10\n";
            firstNumber = Input();

            Answer = log10(firstNumber);

            FinalAnswer(Answer);
            break;

        default:
        system("CLS");
        cout<<endl<<"ERROR!, YOUR CHOICE DOESNOT EXIST!";
        }

        break;


    case 12:

        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tSINE"<<endl;
        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';

           cout<<endl<<"Enter a Number For Sine\n";
           firstNumber = Input();

           Answer = sin(firstNumber);

           FinalAnswer(Answer);

        break;


    case 13:

        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tCOSINE"<<endl;
        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';

           cout<<endl<<"Enter a Number For Cosine\n";
           firstNumber = Input();

           Answer = cos(firstNumber);

           FinalAnswer(Answer);

        break;


    case 14:

        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tTANGENT"<<endl;
        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';

           cout<<endl<<"Enter a Number For Tangent\n";
           firstNumber = Input();

           Answer = tan(firstNumber);

           FinalAnswer(Answer);

        break;


    case 15:

        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';
        cout<<"\t\t\tSQUARE ROOT"<<endl;
        cout<<"\t\t"<<setw(25)<<setfill('-')<<'\n';

           cout<<endl<<"Enter a Number To Find Square Root\n";
           firstNumber = Input();

           Answer = sqrt(firstNumber);

           FinalAnswer(Answer);

        break;



    case 16:
        exit(0);

    default :
        system("CLS");
        cout<<endl<<"ERROR!, YOUR CHOICE DOESNOT EXIST!";
    }

    getche();

} while(userSelection != 16);


}
