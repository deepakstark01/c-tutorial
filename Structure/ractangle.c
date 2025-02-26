#include<stdio.h>
int area(int l, int w)
{
    return l*w;
}
struct rectangle
{
    int length, width;
    int area;
};

void main()
{
  struct rectangle notebook;
  struct rectangle laptop_display;
  notebook.length = 12;
  notebook.width= 3;
  notebook.area = area(notebook.length, notebook.width);
  printf("Area of notebook  = %d\n", notebook.area);

  laptop_display.length= 14;
  laptop_display.width= 10;
  laptop_display.area = area(laptop_display.length, laptop_display.width);
  printf("Area of laptop display  = %d\n", laptop_display.area);


}