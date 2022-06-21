
const int sensor = 19; 
     
void setup() {
  Serial.begin(115200);  
  pinMode(sensor,INPUT);

}

void loop() {
  int output = digitalRead(sensor);
   if (output==1) {           
  Serial.print("FIRE DETECTED!");    
  }
}

