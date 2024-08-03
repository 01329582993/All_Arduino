void setup() {
  // put your setup code here, to run once:
  serial.begin (115200);   // initiate the serie liaison , 115200 : transfere speeds
  serial.println(Serie liaisin initiated); // println is print + \n(new line)

}

void loop() {
  // put your main code here, to run repeatedly:
  static unsigned int time = 0; // static intiger type 

  delay(1000);  // time delay in ms
  serial.print("time = ");
  serial.prinrln(time);
  time += 1; // like C operation is equal to time = time + 1 

}
