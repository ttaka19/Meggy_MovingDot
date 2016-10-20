// MovingDot by Trevor Taka

#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

int x = 3;
int y = 4;
int xapple = random(8);
int yapple = random(8);
boolean gotApple = false;

void setup() 
{
 MeggyJrSimpleSetup();      // Required code, line 2 of 2.
}

void loop() 
{
  DrawPx(x,y,Yellow);
  DrawPx(5,1,Blue);
  DrawPx(5,2,Blue);
  DrawPx(5,3,Blue);
  DrawPx(5,4,Blue);
  DrawPx(5,5,Blue);
  DrawPx(5,6,Blue);
  DrawPx(5,7,Blue);
  DrawPx(0,1,Orange);
  DrawPx(1,1,Orange);
  DrawPx(2,1,Orange);
  DrawPx(4,1,Orange);
  DrawPx(1,6,Green);
  DrawPx(2,6,Green);
  DrawPx(4,6,Green);
  DrawPx(1,5,Green);
  DrawPx(1,4,Green);
  DrawPx(1,3,Green);
  DrawPx(2,3,Violet);
  DrawPx(3,3,Violet);
  DrawPx(4,3,Violet);
  DrawPx(xapple,yapple,Red);
  DisplaySlate();

  CheckButtonsPress();    // Check to see if button was pressed
  
  if (Button_Right && x < 7 && ReadPx(x + 1, y) == 0 || ReadPx(x + 1, y) == 1)  
  {
     x = x + 1;
  }
  if (Button_Left && x > 0 && ReadPx(x - 1, y) == 0 || ReadPx(x - 1, y) == 1)   // If the left arrow was pressed, take one away from x
  {
     x = x - 1;
  }
  if (Button_Down && y > 0 && ReadPx(x, y - 1) == 0 || ReadPx(x, y - 1) == 1)   // If the up arrow was pressed, add one to y
  {
     y = y - 1;
  }
  if (Button_Up && y < 7 && ReadPx(x, y + 1) == 0 || ReadPx(x, y + 1) == 1) // If the down arrow was pressed, take one away from y  
  {
     y = y + 1;
  }
  if (ReadPx(x,y) ==1)
  {
    Tone_Start(18182,50);
    xapple = random(8);
    yapple = random(8);
  }
  ClearSlate();
  delay(1);
  DisplaySlate();
  }
