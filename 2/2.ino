#define c  131
#define cs 139
#define d  147
#define ds 156
#define e  165
#define f  175
#define fs 185
#define g  196
#define gs 208
#define a  220
#define as 233
#define b  247
#define c2  262
#define cs2 277
#define d2  294
#define ds2 311
#define e2  330
#define f2  349
#define fs2 370
#define g2  392
#define gs2 415
#define a2 440
#define as2 466
#define b2  494
#define WHOLE 1 //全分符
#define HALF 0.5 //半分符
#define QUARTER 0.25
#define EIGHTH 0.125
#define SIXTEENTH 0.0625

int tune[] = {c, cs, d, ds, e, f, fs, g, gs, a, as, b, c2, cs2, d2, ds2 };
float duration = 500;

int length;

#include<Keypad.h>
#include<SevSeg.h>
SevSeg sevseg;

const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {{'F', 'B', '7', '3'}, {'E', 'A', '6', '2'}, {'D', '9', '5', '1'}, {'C', '8', '4', '0'}};
byte rowPins[ROWS] = {8, 9, 10, 11};
byte colPins[COLS] = {12, 13, 14, 15};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
char key;

void setup() {
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}


void loop()
{

  key = keypad.getKey();
  if (key != NO_KEY)
  {
    switch (key)
    {
      case '0':
        tone(5, c, duration);
        break;
      case '1':
        tone(5, cs, duration);
        break;
      case '2':
        tone(5, d, duration);
        break;
      case '3':
        tone(5, ds, duration);
        break;
      case '4':
        tone(5, e, duration);
        break;
      case '5':
        tone(5, f, duration);
        break;
      case '6':
        tone(5, fs, duration);
        break;
      case '7':
        tone(5, g, duration);
        break;
      case '8':
        tone(5, gs, duration);
        break;
      case '9':
        tone(5, a, duration);
        break;
      case 'A':
        tone(5, as, duration);
        break;
      case 'B':
        tone(5, b, duration);
        break;
      case 'C':
        tone(5, c2, duration);
        break;
      case 'D':
        tone(5, cs2, duration);
        break;
      default :
        tone(5, d2, duration);
        break;

    }
  }


}
