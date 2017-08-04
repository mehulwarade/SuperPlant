/*
  # Editor     : Lauren
  # Date       : 13.01.2012
  # Version    : 1.0
  # Connect the sensor to the A0(Analog 0) pin on the Arduino board
  # the sensor value description
  # 0  ~300     dry soil
  # 300~700     humid soil
  # 700~950     in water
  */
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
  
}
void loop() {
  int val;
  val = analogRead(0); //connect sensor to Analog 0
   Serial.println(val) ;
   delay(1000);
             if(val < 300){
             digitalWrite(LED_BUILTIN, HIGH);                  
            }
             else if(val > 300 && val < 700){
             digitalWrite(LED_BUILTIN, LOW);    
            }
              else {
                digitalWrite(LED_BUILTIN, HIGH);   
                delay(300);                      
                digitalWrite(LED_BUILTIN, LOW); 
                delay(300);   
             }
  }

