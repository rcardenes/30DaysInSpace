// RGB
auto RedPin = 11;
auto GreenPin = 10;
auto BluePin = 9;

struct Color {
  int red;
  int green;
  int blue;
};

Color red    {125,   0,   0};
Color green  {  0, 125,   0};
Color blue   {  0,   0, 125};
Color yellow {  0, 80, 125};
Color purple {80,   0, 125};
Color white  {125, 125, 125};

Color sequence[]{
  red,
  green,
  blue,
  yellow,
  purple,
  white
};

void setup() {
  pinMode(RedPin, OUTPUT);
  pinMode(BluePin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
}

void loop() {
  for(auto color: sequence) {
    RGB_Color(color);
    delay(1000);
  }
}

void RGB_Color(Color& color) {
  analogWrite(RedPin, color.red);
  analogWrite(GreenPin, color.green);
  analogWrite(BluePin, color.blue);
}
