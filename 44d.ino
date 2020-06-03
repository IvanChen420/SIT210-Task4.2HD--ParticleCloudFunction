int redLED = A1;
int blueLED = A2;
int greenLED = A3;

int RedClicked = 0;
int BlueClicked = 0;
int GreenClicked = 0;


void setup()
{
   pinMode(redLED, OUTPUT);
   pinMode(blueLED, OUTPUT);
   pinMode(greenLED, OUTPUT);

   Particle.function("Switch",HTMLfunciton);

   digitalWrite(redLED, LOW);
   digitalWrite(blueLED, LOW);
   digitalWrite(greenLED, LOW);
}



void loop()
{
   // Nothing to do here
}



int HTMLfunciton(String arg) {


    if (arg=="red") {
        if(RedClicked%2==0)
        {
          digitalWrite(redLED,HIGH);
          RedClicked++
        }else
        {
          digitalWrite(redLED, LOW);
          RedClicked++
        }
        return 1;
    }
    else if (arg=="blue") {
        if(BlueClicked%2==0)
        {
          digitalWrite(blueLED,HIGH);
          BlueClicked++;
        }else
        {
          digitalWrite(blueLED, LOW);
          BlueClicked++;
        }
        return 2;
    }
    else if (arg=="green")
    {
        if(GreenClicked%2==0)
        {
          digitalWrite(greenLED,HIGH);
          GreenClicked++;
        }else
        {
          digitalWrite(greenLED, LOW);
          GreenClicked++;
        }
        return 3;
    }
    else {
        return -1;
    }
}
