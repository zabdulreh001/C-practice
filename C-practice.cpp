#include <stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
int assignment1(void);//averages of scores
int assignment2(void);//max&min
int assignment3(void);//quiz3
int assignment4(void);//midterm
int recursiveassignment3(int tot);
int assignment5(void);//practice find factorial using recursion
double recursiveassignment5(double scan);
int assignment6(void);//reverse a string
int assignment7(void);//Similar to the above but slightly different: You are given two int variables j and k, an int array zipcodeList that has been declared and initialized, an int variable nZips that contains the number of elements in zipcodeList, and an int variable duplicates. Write some code that assigns 1 to duplicates if any two elements in the array have the same value, and that assigns 0 to duplicates otherwise. Use only j, k, zipcodeList, nZips, and duplicates. 
int assignment8(void);//how many duplicates between two arrays
int assignment9(void);//pointers practice
int assignment10(void);//average of array
int assignment11(void);//How many times a certain word has been input
int assignment12(void);//Pointer and Struct practice
int phylab(void);//clark wants some program case14
struct book{//for assignment 12
  char booktitle[90];
  char booksubject[90];
  int bookprice;
  double bookid;
};
int assignment13(void);//another struct
struct order{
  char name[30];
  int price;
  double id;
};

struct values{
  float value;
};
void populate2(struct order*ptr, int size);
void populate(struct book*ptr, int size);
void printstruct(struct order*ptr, int size);
int main(void){
  int choice;
  int dummy;
  printf("\nWhich assignment would you like to execute?\n");
  scanf("%d", &choice);
  switch(choice){
  case 1:{
    dummy = assignment1();
    main();
  }
  case 2:{
    dummy = assignment2();
    main();
  }
  case 3:{
    dummy = assignment3();//assignment 3 is actually quiz3
    main();
  }
  case 4:{
    dummy = assignment4();
    main();
  }
  case 5:{ 
    dummy = assignment5();
    main();
  }
  case 6:{ 
  dummy = assignment6();
  main();
  }
  case 7:{
    dummy = assignment7();
    main();
  }
  case 8:{
    dummy = assignment8();
    main();
  }
  case 9:{
  dummy = assignment9();
  main();
  }
  case 10:{
  dummy = assignment10();
  main();
  }
  case 11:{
  dummy = assignment11();
  main();
  }
  case 12:{
  dummy = assignment12();
  main();
  }
  case 13:{
  dummy = assignment13();
  main();
  }
  case 14:{
    dummy = phylab();
  }
  default: main();
  }
  return 0;
}

int assignment1(void) {
  float finalscore;
  float midtermscore;
  float assignmentscore[3];
  int i = 0;
  float sum;
  float average;
  float total;
  char tot[10];
  float const weight1 = 0.4;
  float const weight2 = 0.3;
  for(i=0; i<=2; i++){
  printf("Please enter the score of assignment %d\n", i+1);
  scanf ("%f", &assignmentscore[i]);
  }
  printf("Please enter your midterm score\n");
  scanf("%f", &midtermscore);
  printf("Please enter your Final score\n");
  scanf("%f", &finalscore);
  for(i=0; i<=2; i++){
    sum += assignmentscore[i];
  }
  printf("sum %f\n", sum);
  average = (sum/3)*weight1;
  printf("average %f\n", average);
  midtermscore = midtermscore*weight2;
  printf("midterm %f\n", midtermscore);
  finalscore = finalscore*weight2;
  printf("Final %f\n", finalscore);
  total = average + midtermscore + finalscore;
  sprintf(tot, "%f", total);
  printf("Your Grade: %s", tot);
  return 0;
}

int assignment2(void){
  float scan=1;
  int i=0;
  float max =0;
  float min =0;
  float tot =0;
  float average =0;
  while(scan!=0){
    printf("Please Enter your number, Enter 0 to quit\n");
    scanf("%f", &scan);
          if (i==0){
      max=scan;
      min=scan;
    }
    tot+= scan;
    if(max<scan){
      max = scan;
    }
    
    if(scan!=0){
    if(i>=1){
    if(scan<min){
      //if (scan!=0){
      min = scan;
      }
    }
    }
    //}
    i++;
  }
  average = (tot/(i-1));
  printf("The max is : %5.2f\nThe min is: %5.2f\n", max, min);
  printf ("The total is : %4.1f\nThe average is: %5.2f", tot, average);
  return 0;
}

int assignment3(void){
  int input = 0;
  int truth = 0;
  int i = 0, count = 0;
  printf("Enter your input to check if it is prime\n");
  scanf("%d", &input);
  for(i=1; i<=input; i++){
  if ((input%i)== 0){
    truth++;
  }
  }
  if (input == 0 || input == 1){
  truth = 2;
  }
  if (truth == 2){
  printf("%d is prime", input);
  }
  else{
  printf("%d is not prime", input);
  }
  return 0;
}

int assignment4(void){
  int input =0;
  int i=0;
  int tot;
  printf("Total of squares: Enter your input: ");
  scanf("%d", &input);
  for (i=1; i<=input; i++){
    tot += i*i;
  }
  printf("\nThe sum of squares is: %d", tot);
  i = recursiveassignment3(tot);
  printf ("\nThis is the output of the specified recursion: %d", i);
  return 0;
}
int recursiveassignment3 (int tot){
    if(tot<0){
      return -1;
    }
    if (tot == 0){
      return 4;
    }
      return (2*tot) + recursiveassignment3(tot-1);
}

int assignment5(void){
  double input;
  double tot;
  printf("Enter the number you wish to find the factorial of\n");
  scanf("%lf", &input);
  tot = recursiveassignment5(input);
  printf("\nThis is the factorial of %1.0lf: %1.0lf", input, tot);
  return 0;
}
double recursiveassignment5(double scan){
  if (((int)scan)%1 != (scan/1)){
    scan = round(scan);
  }
  if (scan==0){
    return 1;
  }
  return scan*(recursiveassignment5(scan-1));
}

int assignment6(void){
  char array1[20];
  char array2[20];
  int i = 0;
  int n = 0;
  int c =0;
  printf("Enter string to be reversed\n");
  scanf("%s", array1);
  n = strlen(array1);
  c = sizeof(array2);
  for (i = 0; i<(n); i++){
    //strcpy(&array2[(n-i)],&array1[i]);
    array2[(n-i)] = array1[i];
  }
  c = sizeof(array2);
  c = c-n;
  printf("Reversed Array: ");
  for (i =0; i<(n+1); i++){
  printf("%c", array2[i]);
  }
  printf("\nOriginal Array: %s\n", array1);
  return 0;
}

int assignment7(void){
  int j = 0;
  int k = 0;
  int nZip = 0;
  int duplicates = 0;
  int zipcodeList[6];
  nZip = (sizeof(zipcodeList))/4;
  printf("Populate your list please: ");
  for (j=0; j<(nZip-1); j++){
    scanf("%d", &zipcodeList[j]);
  }
  for(j=0; j<=(nZip-1); j++){
    for(k=j+1; k<=(nZip-1); k++){
    if(zipcodeList[j] == zipcodeList[k]){
      duplicates++;
    }
    if (duplicates != 0){
      break;
    }
  }
  if (duplicates != 0){
    break;
  }}
  if (duplicates != 0){
  printf("There is a duplicate");
  return 0;}
  if (duplicates == 0){
    printf("There is no duplicate");
  }
  return 0;
}

int assignment8(void){
  int array1[7];
  int array2[7];
  int size1= 0;
  int size2= 0;
  int i = 0;
  int k = 0;
  int duplicates = 0;
  printf("Populate string1\n");
  size1 = (sizeof(array1)/4);
  size2 = (sizeof(array2)/4);
  for (i=0; i<(size1); i++){
    scanf("%d", &array1[i]);
  }
  printf("Populate string2\n");
  for (i=0; i<(size1); i++){
    scanf("%d", &array2[i]);
  }
  for (i=0; i<=(size1); i++){
    for (k=i; k<=(size1-1); k++){
      if(array1[i] == array2[k]){
        duplicates++;
      }
    }
  }
  printf("%d", duplicates);
  return 0;
}

int assignment9(void){
  double a = 0;
  double b = 0;
  double*c;
  double*d;
  printf("Enter value of a: ");
  scanf("%lf", &a);
  printf("Enter value of b: ");
  scanf("%lf", &b);
  c = &a;
  d = &b;
  *c = (*c)*(*d);
  *d = ((*c)/((*d)*(*d)));
  printf("Location of c: %p\n", c);
  printf("Value of c: %lf\n", *c);
  printf("Location of d: %p\n", d);
  printf("Value of d: %lf", *d);
  return 0;
}
int assignment10(void){
  int array1[100] = {1};
  int tot = 0;
  float avg = 0;
  int i = 0;
  int truth = 0;
  int size =0;
  int trip = 0;
  printf("Populate your array\n");
  for(i=0; i<10; i++){
    scanf("%d", &array1[i]);
  }
  size = i+1;
  for (i=0; i<10; i++){
    tot += array1[i];
  }
  avg = tot/(i+1);
  for (i=0; i<10; i++){
    if(avg<array1[i]){
      truth++;
    }
  }
  printf("The number of elements above the average were: %d", truth);
  return 0;
}

int assignment11(){//FIRST TRY!!!
  char user[100];
  char check[100];
  char checker[100];
  int i = 0;
  int len, len2;
  int runtime = 0;
  int score;
  printf("Please populate your array (MAX 100) (No spaces)\n");
  scanf("%s", user);
  len = strlen(user);
  printf("What would you like to check for? (MAX 100) (No spaces)\n");
  scanf("%s", check);
  len2 = strlen(check);
  for (i=0; i<len; i++){
    for(runtime =0; runtime<len2; runtime++){
      checker[runtime] = user[i+runtime];
    }
    if (strcmp(checker, check)==0){
      score++;
    }
  }
  printf("Number of occurrences: %d\n", score);
  return 0;
}

int assignment12(void){
  struct book list[100];
  struct book*ptr;
  struct book holder;
  int size =0;
  int i =0;
  printf("How many books?");
  scanf("%d", &size);
  ptr = list;
  populate(ptr, size);
  for(i=0; i<size; i++){
    holder = list[i];
    printf("This is the title of book %d:\n %s\n",i+1, holder.booktitle);
    printf("This is the subject:\n %s\n", holder.booksubject);
    printf("This is the price: %d\n", holder.bookprice);
    printf("Id number: %lf\n", holder.bookid);
  }
  return 0;
}

void populate(struct book*ptr, int size){
  int i;
  int n;
  n = sizeof(*ptr);
  for (i=0; i<size; i++){
  printf("Enter your book name please\n");
  gets((ptr+(i))->booktitle);
  gets((ptr+(i))->booktitle);
  printf("Enter your book subject please\n");
  gets((ptr+(i))->booksubject);
  printf("Enter your book price please\n");
  scanf("%d", &(ptr+(i))->bookprice);
  printf("Enter your book ID please\n");
  scanf("%lf", &(ptr+(i))->bookid);
  }
  return;
}

int assignment13(void){
  int i;
  int size;
  struct order e[20];
  struct order*ptr;
  ptr = &e[0];
  printf("Please enter the number of orders");
  scanf("%d", &size);
  populate2(ptr, size);
  printstruct(ptr, size);
  return 0;
}

void populate2(struct order*ptr, int size){
  int i =0;
  for(i=0; i<size; i++){
    printf("Enter order name\n");
    scanf("%s", (ptr+i)->name);
    printf("Enter price\n");
    scanf("%d", &(ptr+i)->price);
    printf("Enter order ID");
    scanf("%lf", &(ptr+i)->id);
  }
  return;
}

void printstruct(struct order*ptr, int size){
  int i =0;
  for (i=0; i<size; i++){
    printf("Name: %s\n", (ptr+i)->name);
    printf("Price: %d\n", (ptr+i)->price);
    printf("ID: %lf\n", (ptr+i)->id);
  }
  return;
}

int phylab(void){
  unsigned int i =0;
  unsigned int* w = &i;
  float value[10];
  float entered;
  float rand = 0;
  float x = 0;
  for (i=0; i<11; i++){
    printf ("Please enter value %d:", i);
    scanf ("%f", &entered);
    value[i] = entered;
  }
  for (i=0; i<11; i++){
    x = ((float)rand_r(w)/(float)(.001)) * .001;
    value[i] = value[i] + x;
    printf ("%f, ", value[i]);
  }
  
  return 0;
}