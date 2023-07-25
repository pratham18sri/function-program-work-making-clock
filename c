#include <stdio.h>
 void morning ();        // function prototype 
void afternoon();
void night();
void evening();
int main(void) {
  float time ;
  printf(" enter your time in 24 hr  :");
  scanf("%f", & time );
  
  if(time >6 && time <12){
    morning  ();
  }
  else if(time >=12 && time < 16){
    afternoon() ;
  }
   else if (time >20 && time <24){
     night();
   }
  else if (time >=16 && time <20){
    evening();
  }
  return 0;
} 
void morning (){
  printf(" !! GOOD MORNING SIR !!");
}
void afternoon(){
  printf("!! GOOD AFTER NOON SIR !!");
}
void night() {
  printf(" !! GOOD NIGHT SIR !!");
}
void evening () {
  printf(" !! GOOD EVENING  SIR !!");
}
