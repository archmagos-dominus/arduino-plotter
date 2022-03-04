#include <AFMotor.h>    // Adafruit Motor shield library

// Connect a stepper motor with 48 steps per revolution (7.5 degree) to motor port #2 (M3 and M4)
AF_Stepper motorx(48, 2);
AF_Stepper motory(48, 1);

// initialize coord
int x, y;

void setup() {

    // set up Serial library at 9600 bps
    Serial.begin(9600);
    Serial.println("Stepper test!");

    // set motor speed to 10rpm
    motorx.setSpeed(200);
    motory.setSpeed(200);

    // reset pen possition
    motorx.step(220, BACKWARD, SINGLE);
    motory.step(240, FORWARD, SINGLE);
    motorx.step(5, FORWARD, SINGLE);
    motory.step(40, BACKWARD, SINGLE);
}

//create a function to be called for each letter

void print_a() {
    for (int i=0 ; i<10; i++){
        motorx.step(1, FORWARD, SINGLE);
        motory.step(2, FORWARD, SINGLE);
    }
    motorx.step(20, FORWARD, SINGLE);
    motorx.step(20, BACKWARD, SINGLE);
    for (int i=0 ; i<10; i++){
        motorx.step(1, FORWARD, SINGLE);
        motory.step(2, FORWARD, SINGLE);
    }
    for (int i=0 ; i<20; i++){
        motorx.step(1, FORWARD, SINGLE);
        motory.step(2, BACKWARD, SINGLE);
    }
    motorx.step(20, FORWARD, SINGLE);
}

void print_b(){
    motory.step(40, FORWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
    motory.step(16, BACKWARD, SINGLE);
    motorx.step(20, BACKWARD, SINGLE);
    motorx.step(24, FORWARD, SINGLE);
    motory.step(24, BACKWARD, SINGLE);
    motorx.step(20, BACKWARD, SINGLE);
    motorx.step(35, FORWARD, SINGLE);
}

void print_c(){
    motory.step(40, FORWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
    motory.step(5, BACKWARD, SINGLE);
    motory.step(5, FORWARD, SINGLE);
    motorx.step(20, BACKWARD, SINGLE);
    motory.step(40, BACKWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
    motory.step(5, FORWARD, SINGLE);
    motory.step(5, BACKWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
}

void print_d(){
    motory.step(40, BACKWARD, SINGLE);
    motory.step(40, FORWARD, SINGLE);
    for (int i=0 ; i<20; i++){
        motorx.step(1, FORWARD, SINGLE);
        motory.step(2, BACKWARD, SINGLE);
    }
    motorx.step(20, BACKWARD, SINGLE);
    motorx.step(30, FORWARD, SINGLE);
}

void print_e(){
    motory.step(40, FORWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
    motorx.step(20, BACKWARD, SINGLE);
    motory.step(20, BACKWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
    motorx.step(20, BACKWARD, SINGLE);
    motory.step(20, BACKWARD, SINGLE);
    motorx.step(40, FORWARD, SINGLE);
}

void print_f(){
    motory.step(40, FORWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
    motorx.step(20, BACKWARD, SINGLE);
    motory.step(20, BACKWARD, SINGLE);
    motorx.step(10, FORWARD, SINGLE);
    motorx.step(10, BACKWARD, SINGLE);
    motory.step(20, BACKWARD, SINGLE);
    motorx.step(40, FORWARD, SINGLE);
}

void print_g(){
    motory.step(40, FORWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
    motory.step(2, BACKWARD, SINGLE);
    motory.step(2, FORWARD, SINGLE);
    motorx.step(20, BACKWARD, SINGLE);
    motory.step(40, BACKWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
    motory.step(10, FORWARD, SINGLE);
    motorx.step(5, BACKWARD, SINGLE);
    motory.step(2, BACKWARD, SINGLE);
    motory.step(2, FORWARD, SINGLE);
    motorx.step(5, BACKWARD, SINGLE);
    motory.step(10, BACKWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
}

void print_h(){
    motory.step(40, FORWARD, SINGLE);
    motory.step(20, BACKWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
    motory.step(20, FORWARD, SINGLE);
    motory.step(40, BACKWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
}

void print_i(){
    motorx.step(10, FORWARD, SINGLE);
    motory.step(40, FORWARD, SINGLE);
    motorx.step(5, BACKWARD, SINGLE);
    motorx.step(10, FORWARD, SINGLE);
    motorx.step(5, BACKWARD, SINGLE);
    motory.step(40, BACKWARD, SINGLE);
    motorx.step(30, FORWARD, SINGLE);
}

void print_j(){
    motory.step(5, FORWARD, SINGLE);
    motory.step(5, BACKWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
    motory.step(40, FORWARD, SINGLE);
    motorx.step(5, BACKWARD, SINGLE);
    motorx.step(5, FORWARD, SINGLE);
    motory.step(40, BACKWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
}

void print_k(){
    motory.step(40, FORWARD, SINGLE);
    motory.step(20, BACKWARD, SINGLE);
    motorx.step(5, FORWARD, SINGLE);
    motory.step(20, FORWARD, SINGLE);
    motory.step(20, BACKWARD, SINGLE);
    motorx.step(3 FORWARD, SINGLE);
    motory.step(20, BACKWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
}

void print_l(){
    motory.step(40, FORWARD, SINGLE);
    motory.step(40, BACKWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
    motory.step(8, FORWARD, SINGLE);
    motory.step(8, BACKWARD, SINGLE);
    motorx.step(20, FORWARD, SINGLE);
}

void print_m(){
  motory.step(40, FORWARD, SINGLE);
  for (int i=0 ; i<20; i++){
      motorx.step(1, FORWARD, SINGLE);
      motory.step(1, BACKWARD, SINGLE);
  }
  for (int i=0 ; i<20; i++){
      motorx.step(1, FORWARD, SINGLE);
      motory.step(1, FORWARD, SINGLE);
  }
  motory.step(40, BACKWARD, SINGLE);
  motorx.step(20, FORWARD, SINGLE);
}

void print_n(){
  motory.step(40, FORWARD, SINGLE);
  for (int i=0 ; i<20; i++){
    motorx.step(1, FORWARD, SINGLE);
    motory.step(2, BACKWARD, SINGLE);
  }
  motory.step(40, FORWARD, SINGLE);
  motory.step(40, BACKWARD, SINGLE);
  motorx.step(20, FORWARD, SINGLE);
}

void print_o(){
  motory.step(40, FORWARD, SINGLE);
  motorx.step(20, FORWARD, SINGLE);
  motory.step(40, BACKWARD, SINGLE);
  motorx.step(20, BACKWARD, SINGLE);
  motorx.step(40, FORWARD, SINGLE);
}

void print_p(){
  motory.step(40, FORWARD, SINGLE);
  motorx.step(20, FORWARD, SINGLE);
  motory.step(20, BACKWARD, SINGLE);
  motorx.step(20, BACKWARD, SINGLE);
  motory.step(20, BACKWARD, SINGLE);
  motorx.step(40, FORWARD, SINGLE);
}

void print_q(){
  motory.step(40, FORWARD, SINGLE);
  motorx.step(20, FORWARD, SINGLE);
  motory.step(40, BACKWARD, SINGLE);
  motorx.step(20, BACKWARD, SINGLE);
  motorx.step(20, FORWARD, SINGLE);
  motory.step(3, BACKWARD, SINGLE);
  motorx.step(3, BACKWARD, SINGLE);
  motorx.step(3, FORWARD, SINGLE);
  motory.step(3, FORWARD, SINGLE);
  motory.step(20, FORWARD, SINGLE);
}

void print_r(){
  motory.step(40, FORWARD, SINGLE);
  motorx.step(20, FORWARD, SINGLE);
  motory.step(16, BACKWARD, SINGLE);
  motorx.step(20, BACKWARD, SINGLE);
  motorx.step(16, FORWARD, SINGLE);
  motory.step(24, BACKWARD, SINGLE);
  motorx.step(24, FORWARD, SINGLE);
}

void print_s(){
  motory.step(5,FORWARD, SINGLE);
  motory.step(5,BACKWARD, SINGLE);
  for (int t = 0; t < 180; t++){
    int x2 = cos(t * M_PI /180);
    int y2 = sin(t * M_PI /180);
    int dx = x2 - x;
    int dy = y2 - y;
    motorx.step(abs(dx), dx > 0 ? FORWARD : BACKWARD, SINGLE);
    motory.step(abs(dy), dy > 0 ? FORWARD : BACKWARD, SINGLE);
    x = x2;
    y = y2;
  }
  motory.step(5,BACKWARD, SINGLE);
  motory.step(5,FORWARD, SINGLE);
}

void print_t(){
  motorx.step(10, FORWARD, SINGLE);
  motory.step(40, FORWARD, SINGLE);
  motorx.step(15, BACKWARD, SINGLE);
  motorx.step(30, FORWARD, SINGLE);
  motorx.step(15, BACKWARD, SINGLE);
  motory.step(40, BACKWARD, SINGLE);
  motorx.step(30, FORWARD, SINGLE);
}

void print_u(){
  motory.step(40, FORWARD, SINGLE);
  motorx.step(5, BACKWARD, SINGLE);
  motorx.step(10, FORWARD, SINGLE);
  motorx.step(5, BACKWARD, SINGLE);
  motory.step(40, BACKWARD, SINGLE);
  motorx.step(15,FORWARD, SINGLE);
  motory.step(40, FORWARD, SINGLE);
  motorx.step(5, BACKWARD, SINGLE);
  motorx.step(10, FORWARD, SINGLE);
  motorx.step(5, BACKWARD, SINGLE);
  motory.step(40, BACKWARD, SINGLE);
  motorx.step(10, FORWARD, SINGLE);
}

void print_v(){
  for (int i=0 ; i<20; i++){
    motorx.step(1, BACKWARD, SINGLE);
    motory.step(2, FORWARD, SINGLE);
  }
  for (int i=0 ; i<20; i++){
    motorx.step(1, FORWARD, SINGLE);
    motory.step(2, BACKWARD, SINGLE);
  }
  for (int i=0 ; i<20; i++){
    motorx.step(1, FORWARD, SINGLE);
    motory.step(2, FORWARD, SINGLE);
  }
  for (int i=0 ; i<20; i++){
    motorx.step(1, BACKWARD, SINGLE);
    motory.step(2, BACKWARD, SINGLE);
  }
  motorx.step(30, FORWARD, SINGLE);
}

void print_w(){
  for (int i=0 ; i<20; i++){
    motorx.step(1, BACKWARD, SINGLE);
    motory.step(2, FORWARD, SINGLE);
  }
  for (int i=0 ; i<20; i++){
    motorx.step(1, FORWARD, SINGLE);
    motory.step(2, BACKWARD, SINGLE);
  }
  for (int i=0 ; i<20; i++){
    motorx.step(1, FORWARD, SINGLE);
    motory.step(2, FORWARD, SINGLE);
  }
  for (int i=0 ; i<20; i++){
    motorx.step(1, FORWARD, SINGLE);
    motory.step(2, BACKWARD, SINGLE);
  }
  for (int i=0 ; i<20; i++){
    motorx.step(1, FORWARD, SINGLE);
    motory.step(2, FORWARD, SINGLE);
  }
  for (int i=0 ; i<20; i++){
    motorx.step(1, BACKWARD, SINGLE);
    motory.step(2, BACKWARD, SINGLE);
  }
  motorx.step(30, FORWARD, SINGLE);
}

void print_x(){
  for (int i=0 ; i<20; i++){
    motorx.step(1, FORWARD, SINGLE);
    motory.step(2, FORWARD, SINGLE);
  }
  for (int i=0 ; i<10; i++){
    motorx.step(1, BACKWARD, SINGLE);
    motory.step(2, BACKWARD, SINGLE);
  }
  for (int i=0 ; i<10; i++){
    motorx.step(1, BACKWARD, SINGLE);
    motory.step(2, FORWARD, SINGLE);
  }
  for (int i=0 ; i<20; i++){
    motorx.step(1, FORWARD, SINGLE);
    motory.step(2, BACKWARD, SINGLE);
  }
  motorx.step(20, FORWARD, SINGLE);
}

void print_y(){
  motorx.step(10, FORWARD, SINGLE);
  motory.step(20, FORWARD, SINGLE);
  for (int i=0 ; i<10; i++){
    motorx.step(1, BACKWARD, SINGLE);
    motory.step(2, FORWARD, SINGLE);
  }
  for (int i=0 ; i<10; i++){
    motorx.step(1, FORWARD, SINGLE);
    motory.step(2, BACKWARD, SINGLE);
  }
  for (int i=0 ; i<10; i++){
    motorx.step(1, FORWARD, SINGLE);
    motory.step(2, FORWARD, SINGLE);
  }
  for (int i=0 ; i<10; i++){
    motorx.step(1, BACKWARD, SINGLE);
    motory.step(2, BACKWARD, SINGLE);
  }
  motory.step(20, BACKWARD, SINGLE);
  motorx.step(30, FORWARD, SINGLE);
}

void print_z(){
  for (int i = 0 ; i < 10; i++) {
    motorx.step(1, FORWARD, SINGLE);
    motory.step(2, FORWARD, SINGLE);
  }
  motorx.step(5, FORWARD, SINGLE);
  motorx.step(10, BACKWARD, SINGLE);
  motorx.step(5, FORWARD, SINGLE);
  for (int i = 0 ; i < 10; i++) {
    motorx.step(1, FORWARD, SINGLE);
    motory.step(2, FORWARD, SINGLE);
  }
  motorx.step(20, BACKWARD, SINGLE);
  motorx.step(20, FORWARD, SINGLE);
  for (int i = 0 ; i < 20; i++) {
    motorx.step(1, BACKWARD, SINGLE);
    motory.step(2, BACKWARD, SINGLE);
  }
  motorx.step(40, FORWARD, SINGLE);
}

//functions to create new line or to reset the pen's position

void print_new_line(){
  motory.step(5, BACKWARD, SINGLE);
  motorx.step(300, BACKWARD, SINGLE);
  motory.step(5, BACKWARD, SINGLE);
}

void reset() {
  motorx.step(250, BACKWARD, SINGLE);
  motory.step(250, FORWARD, SINGLE);
}

///special shapes

void heart(){
    for (int t = 0; t < 7200; t++){
        int x2 = 4* 16 * sin( t * M_PI /180)*sin( t * M_PI /180)*sin( t * M_PI /180);
        int y2 = 4* (13 * cos(t * M_PI /180) - 5* cos(2*t * M_PI / 180) - 2*cos(3 * t * M_PI /180) - cos(4* t * M_PI /180));
        Serial.print(x2); Serial.print(' '); Serial.println(y2);
        int dx = x2 - x;
        int dy = y2 - y;
        motorx.step(abs(dx), dx > 0 ? FORWARD : BACKWARD, SINGLE);
        motory.step(abs(dy), dy > 0 ? FORWARD : BACKWARD, SINGLE);
        x = x2;
        y = y2;
    }
}

void circle(){
    for (int t = 180; t < 360; t++){
        int x2 = 25*cos(t * M_PI /180);
        int y2 = 25*sin(t * M_PI /180);
        int dx = x2 - x;
        int dy = y2 - y;
        motorx.step(abs(dx), dx > 0 ? FORWARD : BACKWARD, SINGLE);
        motory.step(abs(dy), dy > 0 ? FORWARD : BACKWARD, SINGLE);
        x = x2;
        y = y2;
    }
}

//main loop
void loop() {
    //INSERT CODE TO BE EXECUTED HERE
    reset();
    print_new_line();
    print_h();
    print_i();
    print_new_line();
    heart();
}
