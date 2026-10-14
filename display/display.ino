#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Endereco I2C do display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  // Primeira mensagem
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Ola, alunos!");
  lcd.setCursor(0, 1);
  lcd.print("Aula de Robotica");
  delay(3000);

  // Segunda mensagem
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Bem-vindos!");
  lcd.setCursor(0, 1);
  lcd.print("Vamos aprender!");
  delay(3000);

  // Terceira mensagem
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Projeto Arduino");
  lcd.setCursor(0, 1);
  lcd.print("LCD funcionando!");
  delay(3000);
}
