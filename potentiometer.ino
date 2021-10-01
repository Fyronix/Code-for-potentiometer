int enA = 10;
// int in1 = 4;
// int in2 = 5;

// int enB = 3;
// int in3 = 6;
// int in4 = 7;

// int SpeedControl = A2;

// int joyVert = A0; 
// int joyHorz = A1; 

// int MotorSpeed1 = 0;
// int MotorSpeed2 = 0;

// int joyposVert = 512;
// int joyposHorz = 512;


// void setup()

// {
  // Serial.begin(9600);

  // pinMode(enA, OUTPUT);
  // pinMode(enB, OUTPUT);
  // pinMode(in1, OUTPUT);
  // pinMode(in2, OUTPUT);
  // pinMode(in3, OUTPUT);
  // pinMode(in4, OUTPUT);
 
  // digitalWrite(enA, LOW);
  // digitalWrite(in1, LOW);
  // digitalWrite(in2, LOW);

  // digitalWrite(enB, LOW);
  // digitalWrite(in3, LOW);
  // digitalWrite(in4, LOW);

// }


// void loop() {

  // joyposVert = analogRead(joyVert);
  // joyposHorz = analogRead(joyHorz);
  // MotorSpeed1 = analogRead(SpeedControl);
  // MotorSpeed2 = analogRead(SpeedControl);

  // if (joyposHorz < 460)
  // {
    
    // digitalWrite(in1, LOW);
    // digitalWrite(in2, HIGH);

    // digitalWrite(in3, HIGH);
    // digitalWrite(in4, LOW);


    // MotorSpeed1 = map(MotorSpeed1, 0, 1023, 0, 255);
    // MotorSpeed2 = map(MotorSpeed2, 0, 1023, 0, 255);

  // }

  // else if (joyposHorz > 564)
  // {
    
    // digitalWrite(in1, HIGH);
    // digitalWrite(in2, LOW);

    // digitalWrite(in3, LOW);
    // digitalWrite(in4, HIGH);

    // MotorSpeed1 = map(MotorSpeed1, 0, 1023, 0, 255);
    // MotorSpeed2 = map(MotorSpeed2, 0, 1023, 0, 255);

  // }

  // else if (joyposVert > 564)
  // {
    
    // digitalWrite(in1, HIGH);
    // digitalWrite(in2, LOW);

    // digitalWrite(in3, HIGH);
    // digitalWrite(in4, LOW);

    // MotorSpeed1 = map(MotorSpeed1, 0, 1023, 0, 255);
    // MotorSpeed2 = map(MotorSpeed2, 0, 1023, 0, 255);

  // }
  // else if (joyposVert < 460)
  // {
    
    // digitalWrite(in1, LOW);
    // digitalWrite(in2, HIGH);

    // digitalWrite(in3, LOW);
    // digitalWrite(in4, HIGH);


    // MotorSpeed1 = map(MotorSpeed1, 0, 1023, 0, 255);
    // MotorSpeed2 = map(MotorSpeed2, 0, 1023, 0, 255);

  // }


  // else
  // {
    // MotorSpeed1 = 0;
    // MotorSpeed2 = 0;

  // }




  // if (MotorSpeed1 < 8)MotorSpeed1 = 0;
  // if (MotorSpeed2 < 8)MotorSpeed2 = 0;

  // analogWrite(enA, MotorSpeed1);
  // analogWrite(enB, MotorSpeed2);


// }
