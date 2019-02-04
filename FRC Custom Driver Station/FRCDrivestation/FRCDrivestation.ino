#include <Joystick.h>
#include <Button.h>



void setup() {
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);

  pinMode(10, INPUT);
  int buttonState = 0;
 
  Joystick.begin(false);
  Button.begin(false);
//  Joystick.setXAxisRange(205, 837);
 
  Serial.begin(57600);
  pinMode(13, OUTPUT);
}

void loop() {
  static int button = 0;
  static int xAxis = 123;
  static int yAxis = 0;


//  Serial.println("Press: " + button);
//  digitalWrite(13, !digitalRead(13));
//  Joystick.pressButton(button);
//  Joystick.sendState();
//
//  delay(100);
//
//  Serial.println("Release: " + button);
//  digitalWrite(13, !digitalRead(13));
//  Joystick.releaseButton(button);
//  Joystick.sendState();
//
//  delay(100);
//
//  button++;
//
//  if(button > 31) button = 0;

  // AXES

  int xInput = analogRead(A0);
  int xValue = map(xInput, 205, 837, -127, 127);
  xValue = constrain(xValue, -127, 127);

  int yInput = analogRead(A1);
  int yValue = map(yInput, 205, 837, -127, 127);
  yValue = constrain(yValue, -127, 127);

  int zInput = analogRead(A2);
  int zValue = map(zInput, 205, 837, -127, 127);
  zValue = constrain(zValue, -127, 127);


  Joystick.setXAxis(xValue);
  Joystick.setYAxis(yValue);
  Joystick.setZAxis(zValue);
  Joystick.sendState();

  bool IsPressed()
{
  ButtonState = digitalRead(10);
  if(ButtonState == high)
  {
    return true;
  }
  else
  {
    return false
  }

  delay(100);

}
// digitalWrite(13, !digitalRead(13));
// Serial.print(analogRead(A1));
// Serial.print(" : ");
// Serial.println(analogRead(A2));

}
