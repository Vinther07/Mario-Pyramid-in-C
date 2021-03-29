// Mario pyramid in C
// CS50x/2021/psets/1/mario

// Importing modules in C start with #
#include<cs50.h>
#include<stdio.h>

// Think this tells the program there will be a funtion called half_pyramid which we call n and it is an integer (whole number)
void half_pyramid(int n);

// Think this means we initiate main void, as I guess for now will mean start main code here.
int main(void){
    int height;
    do
    {
        // Promts the user for imput as integer (whole number)
        height = get_int("Height: ");
    }
    // Keeps asking if the integer is below 0 OR above 8 (which is currently the max hill height.)
    while(height<=0||height>8);
    
    half_pyramid(height);
}

// Printing the half pyramid.
void half_pyramid(int n)
   {
    int spaces;
    int dashes;
    for(int i = 2; i<=n+1;i++)
    {
        for(spaces = (n-i); spaces>=0;spaces--)
        {
            printf(" ");
        }
        for (dashes = 3; dashes <= i; dashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}
