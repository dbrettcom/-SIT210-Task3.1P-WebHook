void loop() {

  String temp = String(random(60, 80));
  Particle.publish("temp", temp, PRIVATE);
  delay(30000);      // Waits 30 seconds before recording temp
 
}
