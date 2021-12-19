//include some important libraries
#include <Keyboard.h>
#include <Bounce.h>

// declaring buttons
// the first number in the Bounce() function
// is the digital pin you connected to
Bounce button0 = Bounce(15, 20);
Bounce button1 = Bounce(17, 20);  // 10 = 10 ms debounce time
Bounce button2 = Bounce(19, 20);
Bounce button3 = Bounce(21, 20);

void setup() {
  // tell the teensy these are the input pins
  // so it will pay attention to them
  pinMode(15, INPUT);
  pinMode(17, INPUT);
  pinMode(19, INPUT);
  pinMode(21, INPUT); 

}

void loop() {
  // make sure we are paying attention to the
  // state of the buttons
  button0.update();
  button1.update();
  button2.update();
  button3.update();

  // define which keyboard key you want the buttons to b
  if (button0.risingEdge()) {
    Keyboard.press(KEY_A);  
  }

  if (button0.fallingEdge()){
      Keyboard.release(KEY_A);
  }
  
  if (button1.risingEdge()) {
    Keyboard.press(KEY_D);  
  }
//
  if (button1.fallingEdge()){
      Keyboard.release(KEY_D);
  }
  
  if (button2.risingEdge()) {
    Keyboard.press(KEY_S);
  }
  
  if (button2.fallingEdge()){
    Keyboard.release(KEY_S);
  }
  if (button3.risingEdge()) {
    Keyboard.press(KEY_W);
  }
  if (button3.fallingEdge()){
    Keyboard.release(KEY_W);
  }
  //Keyboard.releaseAll();
  //
  // using the joystick function
  // define your X and Y axis for Unity
  // the number in analogRead is the Analog pin you connect to.
  // Check the pinout diagram to see the numbers.
  //Joystick.X(analogRead(0));
  //Joystick.Y(analogRead(1));

}
