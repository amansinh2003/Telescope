const int dir1 = D2; 
const int stp1 = D3; 
const int dir2 = D7; 
const int stp2 = D8; 
char flag = 's'; 
void Move() { 
  if (flag == 'u') { 
    digitalWrite(dir1, HIGH); 
    digitalWrite(stp1, HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(stp1, LOW); 
    delayMicroseconds(1000); 
    Serial.println("up"); 
    
  } 
  if (flag == 'd') { 
    digitalWrite(dir1, LOW); 
    digitalWrite(stp1, HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(stp1, LOW); 
    delayMicroseconds(1000); 
    Serial.println("down"); 
    
  } 
  if (flag == 'l') { 
    digitalWrite(dir2, HIGH); 
    digitalWrite(stp2, HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(stp2, LOW); 
    delayMicroseconds(1000); 
    Serial.println("left"); 
    
  } 
  if (flag == 'r') { 
    digitalWrite(dir2, LOW); 
    digitalWrite(stp2, HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(stp2, LOW); 
    delayMicroseconds(1000); 
    Serial.println("right"); 
    
  } 
  
} 
void set_circuits() { 
  pinMode(stp1, OUTPUT); 
  pinMode(dir1, OUTPUT); 
  pinMode(stp2, OUTPUT); 
  pinMode(dir2, OUTPUT); 
  
}