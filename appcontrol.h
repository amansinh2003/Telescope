#include <WiFiClient.h> 
#include <ESP8266WebServer.h> 
const char* ssid_app = "SYCO"; 
const char* password_app = "aman1234"; 
ESP8266WebServer server(80); 
void handleRoot() { 
  server.send(200, "text/html", "<h1>You are connected</h1>");
} 
void handleUp() { 
  server.send(200, "text/html", "UP"); 
  flag = 'u'; 
} 
void handleDown() { 
  server.send(200, "text/html", "DOWN"); 
  flag = 'd'; 
} 
void handleLeft() { 
  server.send(200, "text/html", "LEFT"); 
  flag = 'l';
} 
void handleRight() { 
  server.send(200, "text/html", "RIGHT"); 
  flag = 'r';
} 
void handleStop() { 
  server.send(200, "text/html", "STOP"); 
  Serial.println("STOP");
  flag = 's';
} 
void set_appServer() { 
  Serial.println(); 
  Serial.print("Configuring access point..."); /* You can remove the password parameter if you want the AP to be open. */ 
  WiFi.softAP(ssid_app, password_app); 
  IPAddress myIP = WiFi.softAPIP(); 
  Serial.print("AP IP address: "); 
  Serial.println(myIP); 
  server.on("/", handleRoot); 
  server.on("/up", handleUp); 
  server.on("/down", handleDown); 
  server.on("/left", handleLeft); 
  server.on("/right", handleRight); 
  server.on("/stop", handleStop); 
  server.begin(); 
  Serial.println("HTTP server started"); 
} 
void appHandle() { 
  Move(); 
  server.handleClient();
}