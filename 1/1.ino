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
int tune[] = { g, c, d, e, e, e, e, f, e, f, a, g, e, d, e, f, f, f, a, c, c, d, e};
float duration[] = { EIGHTH,  QUARTER , QUARTER , QUARTER,  QUARTER, QUARTER, QUARTER, QUARTER, QUARTER, QUARTER, QUARTER, EIGHTH + EIGHTH, QUARTER, QUARTER, QUARTER + EIGHTH,  QUARTER,  QUARTER,  QUARTER,  QUARTER,  QUARTER,  QUARTER, QUARTER,  QUARTER };

int length;
void setup() {
  pinMode(5, OUTPUT);
  length = sizeof(tune) / sizeof(tune[0]);
}

void loop() {
  for (int x=0; x<length; x++) {
      tone(5, tune[x]);
      delay(2500 *duration[x]); 
      noTone(5);
       }
   delay(5000);

  delay(5000);

}
