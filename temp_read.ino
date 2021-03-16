void loop() {

  String temp = String(random(60, 80));
  Particle.publish("temp", temp, PRIVATE);
  delay(5000);      // Waits 5 seconds before recording temp

}