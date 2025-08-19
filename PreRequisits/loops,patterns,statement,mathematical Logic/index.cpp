#include <iostream>
using namespace std;

// int main(){
    //? if else concepts

    // endl used for next line
    //!Q1 Write a program to check if a given number is even or odd.
    /* int userInput;
    cout<<"Enter No. to Identify it is even or odd"<<endl;
    cin>>userInput;
    if(userInput%2==0){
        cout<<userInput<<" is an even number"<<endl;
    }
    else{
        cout<<userInput<<" is a odd number";
    } */

    //!Q2 Largest of Two Numbers
   /*  int input1,input2;
    cout<<"Enter First number: ";
    cin>>input1;
    cout<<"Enter Second number: ";
    cin>>input2;
    if(input1>input2){
        cout<<input1<<" is greatest then "<<input2;
    }
    else if(input2>input1){
        cout<<input2<<" is greatest then "<<input1;
    }
    else{
        cout<<input1<<" and "<<input2 <<" both are equal";
    }
*/
    //! Q3 Check whether a given year is a leap year or not.
           /*
            int year;
         cout<<"Enter year to check it's Leap year or not: ";
         cin>>year;
       if(year%4==0){ 
            if(year%100 != 0){
             cout<<"Yes, it is a leap year.";
            }
            else if (year % 400 == 0){
             cout<<"Yes, it is a leap year.";
             
            }
            else{
                cout<<"No, it is not a leap year.";
            }
        }
        else {
             cout<<"No, it is not a leap year.";
            
         } 
             */
    //! Q4 Vowel or Consonant  
   /* char character;
    cout<<"Enter character to identify,it is vowel or consonant:-> "<<endl;
    cin>>character;

    // make character to lowercase
    if(character>='A'&& character<='Z'){
        character+=32;
    }

    if((character=='a'||character=='e'||character=='i'||character=='o'||character=='u'))
   {
        cout<<character<<" is a vowel";
    }
    else{
       cout<<character<<" is a consonent";

   }
   */


  
  
   // ? switch statements
   /*

double number1,number2,output;
char operation;
cout<<"Enter First no. : ";
cin>>number1;
cout<<"Enter Second no. : ";
cin>>number2;
    cout<<"Enter Operation like (+,-,/,*) :";
    cin>>operation;
   switch(operation){
    case '+':
    output =number1+number2;
    cout<<output;
    break;
     case '-':
    output =number1-number2;
    cout<<output;
    break;
     case '*':
    output =number1*number2;
    cout<<output;break;
     case '/':
    output =number1/number2;
   cout<<output; break;
     default:
     output=number1+number2;
     cout<<output;
   }  */

//? loops
        // for loop
        //!Q1 print number from one to 10
      /*  int count=0;
        for (int i=0;i<10;i++){
            count +=1;
            cout<<count<<endl;//1 2 3 4 5 6 7 8 9 10
        }*/

        //!Q2 print even no. between 1 to 50
       /* for (int i=1;i<=50;i++){
            if(i%2==0){
                cout<<i<<": even"<<endl;
            }
            else{
                cout<<i<<": odd"<<endl;

            }
        }
            */
        //! Q3 Find the sum of the first 20 natural numbers.
            /*int total_20=0;
            for(int i=1;i<=20;i++){
                total_20 += i;
            }
            cout<<total_20;
            */
        //!Q4 Print a multiplication table for any number entered by the user.
        // int num;
        // cout<<"Enter number to get it's table: ";
        // cin>>num;
        /* int i=1;
        while(i<=10){
            int table=num*i;
            cout<<num<<"*"<<i<<" = "<<table<<endl;
            i++;

        } */
        /* for (int i=1;i<=10;){
             int table=num*i;
            cout<<num<<"*"<<i<<" = "<<table<<endl;
            i++;
        } */

        //!Q5 Print numbers in reverse from n to 1.

        /*int num;
        cout<<"Enter number to get its reverse upto 1: ";
        cin>>num;
        for(int i=num;i>=1;){
           cout<<i<<endl;
           i--;
        }*/

        //* 2️⃣ Pattern Printing (Logic + Loops)
       /*
       int size;
       cout<<"Enter number of rows: ";
       cin>>size;
       */
        //!  print right triangle
        /*for(int i=1;i<=size;i++){ //rows
          for(int j=1;j<=i;j++){ //column
                cout<<"*";
          }  
            cout<<endl;
        }*/
        //! print an inverted triangle

        /* for (int i=size;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }
        */
        // ! Print a pyramid pattern of stars.
        // Approach:- 
        // Outer loop for no. of row
        // two nested loop,one for space,another for * print
           /* for(int i=1;i<=size;i++){
                for(int j=1;j<=size-i;j++){
                    cout<<" ";
                }
                
                for(int j=1;j<=2*i-1;j++){
                    cout<<"*";
                }

                cout<<endl;
            //     *
            //    ***
            } */
            // ! inverted pyramid banana hai 
              /*for(int i=size;i>=1;i--){ //row
            
                for(int j=1;j<=size-i;j++){ //space
                    cout<<"space";
                }
                for(int j=1;j<=2*i-1;j++){
                    cout<<"*";
                }
                cout<<endl;
             }*/
//? Mathematics logic with Loops
//! Use loops to solve math problems.

//*  Q Check if a number is prime. 
  /*
  //   simple prime no. check 
    int number;
    cout<<"enter number to check it is prime or not: ";
    cin>>number;
      bool isPrime = true; // assume prime
     if(number<=1){
        isPrime=false;
    }
  else{
//   for(int i=2;i<number;i++){ //regular
       for (int i=2;i*i<=number)//for optimizing 
        if(number%i ==  0){
         isPrime=false;
         break; 
        }
        
    }
    }
    cout<<(isPrime?"Prime number":"non-prime");
  */  

//!Q You've an array where so many numbers you've to convert this array which is prime no. and which not
/* 
    int arr[4];

    int size = 4;
    for(int i=0;i<size;i++){
    cout<<"Enter "<<i+1<<" number: ";
    cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        bool isPrime= true;
        if(arr[i]<=1){
            isPrime=false;
        }
        else{
        for(int j=2;j*j<=arr[i];j++){
            if(arr[i]%j==0){
            isPrime=false;        
            break;
        }
        }
    }
        if(isPrime)
        {cout<<arr[i]<<" = prime"<<endl;}
        else
        {cout<<arr[i]<<" = non-prime"<<endl;}
        }
*/

//! find the factorial of a number?
/*

    int number;
    cout<<"Enter number to get it's factorial: ";
        cin>>number;
    int factorial=1;
        if(number==1){
            cout<<"factorial of "<<number<< " is 1";
        }
        else{
        
            for(int i=2;i<=number;i++){
            factorial*=i;
            }
        }
        cout<<"factorial of "<<number<< " is "<<factorial;
*/

//!Q Reverse a number (e.g., 123 → 321).
    /*int number;
    cout<<"Enter number to get it's factorial: ";
    cin>>number;

    int operatableNumber=number;
    int reverse=0;
    while (operatableNumber > 0) { 
       int remainder = operatableNumber % 10; 
       reverse =reverse*10+remainder;
        operatableNumber /=10;
    }
    cout<<"the reverse of "<<number<<" is "<<reverse;*/
    // Reverse a number by for loop
       /* int number;
        cout<<"Enter number to get it's reverse: ";
        cin>>number;

        int reverse=0;
        for(;number!=0;number/=10){ 
            int remainder=number%10;
            reverse=reverse*10+remainder;
            
        }
        cout<<reverse;*/
    //! Q Find the sum of digits of a number.
       /* int number;
    cout<<"Enter number to get it's sum of digits: ";
    cin>>number;
    int sum=0;
    while(number>0){
        sum+=number%10;
        number/=10;
    }
    cout<<"the sum of all digits are: "<<sum;*/

    //! Find the GCD of two numbers using a loop.
       /*    int num1,num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    // int arr[]={}
    if(num1>num2){
       
        cout<<"GCD of "<<num1<<" and "<<num2<<"= ";
  for(int i=1;i<=num1;i++){
        if(num1%i==0 && num2%i==0){
       cout<<i<<" ";
        }
    }
    }
    else{
        cout<<"GCD of "<<num2<<" and "<<num1<<"= ";
  for(int i=1;i<=num2;i++){
        if(num1%i==0 && num2%i==0){
       cout<<" "<<i;
        }
    }
    } */ 
   

    //*============== 15/08/2025 ==========* 
//! Q Generate the Fibonacci sequence up to n terms.
      /*  int number;
        cout<<"Enter Number to get its fibonacci sequence:";
        cin>>number;
        if (number <= 0) {
        cout << "Invalid input";
    
    }

          else if(number==1){
            cout<<"fibonacci of "<<number<<" = "<<1;
        }
        else{
          
            int a=0;
            int b=1;
            // Print first two numbers
        cout << a << " " << b << " ";
            int i=2;
            while(i<number){ 
                int next=a+b;  
                cout<<next<<" ";
               a=b;
               b=next;
               i++;
            }
        }
    */    
    
    
//! Q Count how many digits are in a given number.
        /*int number; 
        cout<<"Enter number to count it's digits: ";
        cin>>number;
        int operatableNumber=number;
        int count=0;
        while(operatableNumber>0){
            operatableNumber/=10;
            count+=1;
        }
        cout<<" total digits("<<number<<"): "<<count; */    
//! Q Check if a number is a palindrome.
   /*int number; 
        cout<<"Enter number to check whether it is palindrome or not: ";
        cin>>number;
        int actual_number=number;
        int reverse=0;
        while(number>0){
            int remainder=number%10;
            reverse=reverse*10+remainder;
            number/=10;
        }
        if(actual_number==reverse){
            cout<<"Yes! it is palindrome";
        }
        else{
           cout<<"No! "<<actual_number<<" and "<<reverse<<" are not palindrome to each other";  
        }*/

//! Q Check if a number is an Armstrong number.
        /*int number; 
        cout<<"Enter number to check whether it is Armstrong number or not: ";
        cin>>number;
        // find ==> length of number and sum
            int first_operation=number;
            int second_operation=number;
            int power=0;
            
            while(first_operation>0){
                int individual_number=first_operation%10;
                first_operation/=10;
                power+=1;
            }
            // cout<<power; // correct
            
            
            // 123
            int sum=0;
             // perfrom power of count on each number and then sum
            while(second_operation>0){
             int individual_number=second_operation%10;
             int result=1;
                   for(int i=0;i<power;i++){ 
                   result*=individual_number;
                }
                // cout<<result<<endl; 
                sum+=result;
                second_operation/=10;
            }
           
            
            if(number==sum){
                cout<<"Yes it is an armstrong number";
            }
            else{
                cout<<"No it is not an armstrong number";

            }
       */
//!    Count the number of vowels in a given string (without libraries).
/*  cout<<"Enter 5 character that form word,to identify number of vowels: ";
    char word[5];
    // write
    for(int i=0;i<5;i++){
        cin>>word[i];
    }
    // read
    int count=0;
    //anomo
    char vowels[]={'a','e','i','o','u'};

    for(int i=0;i<5;i++){ //0<5T,1<5,T
        for(int j=0;j<=i;j++){ //0<=5,t|0<=1, 1<=1||
            if(word[i]==vowels[j]) //word[0]=a,vowels[0]=a,true
            {
                count+=1;//+1,
            }
            
        }

    }
    cout<<count;
*/

//! Find all factors of a number
/* 
    int number;
    cout<<"Enter number to get it's factors: ";
    cin>>number;
    cout<<"factor of "<<number<<" = ";
    for(int i=1;i<=number;i++){
        if(number%i==0){
            cout<<i<<" ";
        }
  } 
*/ 
// return 0;
// }
//*  =========== 16/08/2025============

//? Understand scope and lifetime of variables
//!  Global variables(sare functions ke bahar))

/*
    int a=10;
    int sum(){
        cout<<a<<endl;
        return a;
    }
    int main(){
        cout<<a;
        sum();
        return 0;
    }
*/

//! Local variables (function/block ke andar)

/*
    int main(){
        int a=11;
        if(a>10){
            int b=11;
            cout<<b; //11
        }
        cout<<b; //declaration error
        return 0;
    }
*/

//! Block/nested scope variables (inner {} me)
/*
    int main(){
    int a=10;
    int b=9;
    int c=8;
    if(a>b){
        int d=9;
        cout<<d<<endl;//9
        if(b>c){
            int d=10;
            cout<<d;//10
        }
        
    }
    
    return 0;
        } 
*/

//! Static local variables (function ke andar, lekin lifetime = program duration) 
/*

   
    void counter(){
            int a=0;
            a++;
            cout<<a<<endl;
        }
   
    void StaticCounter(){
        static int a=0;
        a++;
        cout<<a<<endl;
    }
    int main(){
    //* ==== with normal int ====
    // counter();//1
    // counter();//1
    // counter();//1

    //* ===== with static int ======= 
    // StaticCounter();//1
    // StaticCounter();//2
    // StaticCounter();//3

        return 0;
    }
*/

//! Extern variables (defined elsewhere, but declared with extern)
 

//?  strings 

// string anmol ="anmol";
//     actually,'a'+'n'+'m'+'o'+'l'+'\0'
#include <string>

int main(){
//! Input a string and print it.
/*
    string word;
    cout<<"Enter something? ";
    cin>>word;
    cout<<"You entered: "<<word;
    return 0;
*/ 

//! Find the length of a string (without using .length() function).
/*
    string word;
    cout<<"Enter word to get its length: ";
    cin>>word;
    int length=0;

    // int i=0;
    // while(word[i] != '\0'){
    //     length+=1;
    //     i++;
    // }
    // '\0' null character
    for(int i=0;word[i] != '\0';i++){
        length+=1;
    }
    cout<<length;
*/

//!Count the number of vowels and consonants in a string.
/*

        string word="an";
        string vowels="aeiouAEIOU";
        int vowelCount=0;
        int consonantCount=0;
        for(int i=0;word[i]!='\0';i++){
        char ch=word[i];

        int j=0;
        for(;vowels[j] !='\0';j++){        //a!=0,n!='\0', 
        if(word[i]==vowels[j]){
        vowelCount+=1;
        break;
        }
        }

        if(vowels[j]=='\0' && 
        ((ch >='a' && ch<='z')|| (ch >='A' && ch<='Z')))
        {
        consonantCount+=1;
        }
        }
        cout<<vowelCount<<"  "<<consonantCount;
*/
//*  =========== 17/08/2025============
//!Reverse a string manually (without using inbuilt functions).
/*
        cout<<"enter text/word to reverse it: ";
        string word;
        cin>>word;


        // approach identify length of string

        string reverse="";
        int count=0;
        for(int i=0;word[i] != '\0';i++){
        count++;
        }
        //  reverse the loop okay
        for(int i=count-1;i>=0;i--){ //4>=0
                reverse+=word[i]; 

            
        }
        cout<<reverse;
*/

//!Check if a string is a palindrome.
/*
    // civic
    // madam
    // mom
    // racecar
    // radar

    string word;
    cout<<"enter word: ";
    cin>>word;

    // length 
    int length=0;
    for(int i=0;word[i]!= '\0';i++){
        length++;
    }

    // reverse
    string reverse="";
        for(int i=length-1;i>= 0;i--){
            reverse+=word[i];
        }
        //* cout<<reverse; //working right
    // check palindrome
   
   if(reverse==word){
    cout<<"Yes";
    }
    else{
    cout<<"no";
        }
*/

//!Count the frequency of each character in a string.
/*
    string word = "golden jubilee";
    string withoutDuplicate = "";


    for(int i=0;word[i]!='\0';i++){//going to word one by one g->o->l->d->...e
        int count=0;
        char ch= word[i];
        bool alreadyCounted = false;
     
        for(int j=0;withoutDuplicate[j] != '\0';j++) //tells that if element is already counted then flag become true
        {
         if( withoutDuplicate[j]==ch){
             alreadyCounted = true;
                 break;
                // Immediately exit the inner loop once we found the character in withoutDuplicate.
                // No need to continue checking further, because we already know it’s duplicate.
         }
        }
          if(alreadyCounted) continue;  //agar already counted true hai,toh next iteration pe jaao
               
        for (int j = 0; word[j] != '\0'; j++) {  // <=== this block executes only if alreadyCounted == false
            if (word[j] == ch) count++;
        }
        cout<<ch<<" repeats: "<<count<<" times."<<endl;
         withoutDuplicate += ch; 
    }
*/

//? break and continue 
   
    //     int arr[8]={1,2,3,4,5,6,7,8};
    //         for(int i=0;i<8;i++){
    //     if(i==4){
    //         break; //jaise hi element mil jaaye loop khatam karo
    //     }
    //     cout<<i;//0 1 2 3 
    //   /*if(i==4){
    //         continue;
    //     } // is iteration ko chhod do next iteration pr jaao
    //     cout<<i;//0 1 2 3 5 6 7 
    //     */ 
    // }    
    
//! Remove all spaces from a string.
/*
        string word="Anmol Panday Ji How are You";

        string withoutSpace="";
        for(int i=0;word[i]!='\0';i++){
        if(word[i] !=' '){
        withoutSpace+=word[i];
        }
        }

        cout<<withoutSpace; //AnmolPandayJiHowareYou
*/

//!Remove all duplicate characters from a string
/*
        string word="aaanmol";//op=>anmol
        string unique="";
        for (int i=0;word[i]!='\0';i++)
        {
        char ch=word[i];
        bool isDuplicate=false;
        for(int j=0;unique[j]!='\0';j++)
        {
            if(unique[j]==ch){
                isDuplicate=true;
                break;
            }
        }

        if(isDuplicate) continue;
        unique+=ch;

        }
        cout<<unique;
*/

//! Find the longest word in a given sentence 
/*
    // approach 1. Saare word alag-alag karo jo space se pehle/baad  me aate hai


    string sentence = "Anmol is a good boy";
    int maxLen = 0;       // longest word ka length
    int currLen = 0;      // current word ka length
    string longest = "";  // longest word ko store karega
    string currWord = ""; // current word store karega

    for (int i = 0; sentence[i] != '\0'; i++) {
    char ch=sentence[i];
    if(ch !=' '){
        currLen++;
        currWord+=ch;
    }
    else{
        if(currLen>maxLen){
            maxLen=currLen;
            longest=currWord;
        }
        currLen=0;
        currWord="";
    }
    }
        if(currLen>maxLen){
            maxLen=currLen;
            longest=currWord;
        }
    cout << "Longest word: " << longest << " (length = " << maxLen << ")" << endl;
*/
//!Find the first non-repeating character in a string.
 /*
    string word="swiss"; //o/p->w
    
    string unique="";
    
    for(int i=0;word[i]!='\0';i++) //s,w,i
    {
        char ch=word[i];
        int count=0;
        bool isDuplicate=false;
        for(int j=0;unique[j]!= '\0';j++)
        {
            if(unique[j]==ch){
                isDuplicate=true;
                break;
            }
        }
       

        if(isDuplicate)continue;
             for(int k=0;word[k]!='\0';k++){
                if(word[k]==ch){
                    count++;
                }
              
        }
        if(count==1){

            cout<<ch;
            break;
        }
        unique+=ch;
        }

*/

//!Check if two strings are anagrams of each other.
/*
     // listen =>silent
    // approach==>length same===>character same 
    string word1="silent";
    string word2="listen";

    // case 1 if length is different  it is not an anagrams

    int length1=0;
    int length2=0;
    for(int i=0;word1[i] != '\0';i++)
    {
        length1+=1;
    }
    for(int i=0;word2[i] != '\0';i++)
    {
        length2+=1;
    }
    if(!(length1==length2)){
        cout<<"It is not an anagrams!";
    }
    
    // check all character
    bool isAnagram=true;
       for(int i=0;word1[i] != '\0';i++){
        bool found = false;
        for(int j=0;word2[j] != '\0';j++){
            if(word2[j] == word1[i] ){
               found=true;
                // mark character as "used"
                word2[j] = '#'; 
                break; 
            }
        }
        if(!found){
              isAnagram = false;
            break;
        }
       }
       cout<<(isAnagram?"Yes it is!":"It is not an anagrams!");
*/       
//! Convert a string to uppercase / lowercase.
/*
    string word="Anmol";
    string lowercase="";
    for(int i=0;word[i] != '\0';i++){
        if((word[i] >='A')&&(word[i] <='Z')){
            word[i]+=32;
        }
    }
    
    cout<<word;
 */   



//! 


//* ============================ 18/08/2025=======================

//! doing some flowdiagram and dry run the  program in excalidraw

//!Count how many words are in a string.
/*
       string sentence="this is a good day";

        int count=1;//first word not contain any space

        for(int i=0; sentence[i] != '\0';i++)
        {
        if(sentence[i]==' '){
            count++;
        continue; 
        }
        }
        cout<<count;
*/
//   Find the longest word in a given sentence

string sentence ="it is a good time";
string longest="";
string curr="";
int currlength=0;
int longlength=0;
for (int i=0;sentence[i] != '\0';i++)
{
    if(sentence[i] != ' ')
    {
      curr+=sentence[i];
      currlength++;
  
    
    }
    else {
          if(currlength>longlength){
        longest=curr;
        longlength=currlength;
    }
    //reset
     currlength=0;
        curr="";
    }
    }
   
 if(currlength>longlength){
        longest=curr;
        longlength=currlength;
  
    }
cout<<longest<<" = "<<longlength;
return 0;
}
