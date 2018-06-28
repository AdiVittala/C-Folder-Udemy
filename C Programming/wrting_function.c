//Write a function to print Simple Interest
// Functions should be declared before they are called in the main function. If a function is declared before it is called, compiler can throw an error. In order to over this issue
// We can declare a function prototype before a function is called in the main program as shown below.

double getSimpleinterest(double, double, double);

//double getSimpleInterest(double principal, double rate, double time){ // function should be defined with type of value it would be returning and also the type of input values should be declared in the function definition
  //  double interest;
    //interest = (principal * rate * time)/100.0;
    //return interest;
//}

int main(){
    double p, r, t, i;
    printf("Enter the principal: ");
    scanf("%lf", &p);
    printf("Enter rate of interest: ");
    scanf("%lf", &r);
    printf("Enter duration: ");
    scanf("%lf", &t);

    i = getSimpleInterest(p,r,t); //Function call
    printf("Total Interest is: $%0.2lf\n", i); //Limit output to 2 decimal places

    return 0;
}

getSimpleInterest(double principal, double rate, double time){
    double interest;
    interest = (principal * rate * time)/100.0;
    return interest;
}
