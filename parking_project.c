#include<stdio.h>
///Declared 6 function///
int Menu();
void car();
void bus();
void truck();
void Showdetails();
void Delete();


int no_of_car=0,no_of_bus=0,no_of_truck=0,amount=0,total_count=0;

void main()
{
    system("color 57");
    while(1){
    system("cls");
    switch(Menu())
    {
       case 1:  car();
                    break;
       case 2:  bus();
                     break;
       case 3:  truck();
                     break;
       case 4:   Showdetails();
                      break;
       case 5:   Delete();
                      break;
       case 6:   exit(0);

       default :  printf("\nInvalid Choice!!");


    }
    getch();
}
///Create Menu function///
}
int Menu()
{
    int choose;
    printf("\n1.Enter Car(100tk): ");
    printf("\n2.Enter Bus(200tk): ");
    printf("\n3.Enter Truck(300tk): ");
    printf("\n4.Show Status: ");
    printf("\n5.Delete Data: ");
    printf("\n6.Exit: ");


     printf("\n\nEnter your choice: ");
     scanf("%d",&choose);
     return(choose);
}
///Create Delete function///
void Delete()
{
    no_of_car = 0;
     no_of_bus = 0;
      no_of_truck = 0;
      amount = 0;
      total_count = 0;
}
///Create Showdetails function///
void Showdetails()
{
       printf("\nNumber of Car = %d",no_of_car);
       printf("\nNumber of Bus = %d",no_of_bus);
       printf("\nNumber of Truck = %d",no_of_truck);
       printf("\nTotal number of vehicle = %d",total_count);
       printf("\nTotal gain amount = %d",amount);
}
///Create Car function///
void car()
{
      printf("\nEntry Successfily!!!!");
      no_of_car++;
      amount = amount + 100;
      total_count++;


}
///Create bus function///
void bus()
{
      printf("\nEntry Successfily!!!!");
      no_of_bus++;
      amount = amount + 200;
      total_count++;


}
///Create Truck function///
void truck()
{
      printf("\nEntry Successfily!!!!");
      no_of_truck++;
      amount = amount + 300;
      total_count++;


}
