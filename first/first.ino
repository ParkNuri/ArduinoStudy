//int i=0;
void setup() {
  //시리얼통신을 시작하겠다는 의미 - 시리얼통신을 위한 기본작업을 준비
  Serial.begin(9600);//통신속도를 정의
}

void loop() {
    //i = i+1;
    Serial.println("hello");
    Serial.flush();
    delay(1000);
}
