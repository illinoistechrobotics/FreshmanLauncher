const int TRIGGER = 6; //pin out for the singal

char buf[32];

//Written by Taylor of ITR


//Description Written by ShoelessJo3 10/26/17
//Operation of this program is simple
//Open the serial monitor with Ctrl+Shift+M
//Input 1 to enable the mosfet
//Input anythin else to turn the mosfet off
//Great Success!


void setup() {
  // put your setup code here, to run once:
  pinMode(TRIGGER, OUTPUT);
  digitalWrite(TRIGGER, LOW);
  Serial.begin(115200); //this is the baudrate for the xbees
  Serial.println("Ready!");
}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available() > 0){//if there is user input on the command line
    char c = Serial.read();

    if(c == "1")
    {
          digitalWrite(TRIGGER, HIGH);
    Serial.println("fired!");
    }
    else
    {
      digitalWrite(TRIGGER, LOW);
      Serial.println("Stopping");
    }
    }

  
  }

}
