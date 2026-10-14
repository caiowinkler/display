# Display LCD 16x2 I2C

Sketch Arduino que exibe três telas em loop, mantendo cada tela por 3 segundos.

| Tela | Linha 1 | Linha 2 |
| --- | --- | --- |
| 1 | Ola, alunos! | Aula de Robotica |
| 2 | Bem-vindos! | Vamos aprender! |
| 3 | Projeto Arduino | LCD funcionando! |

## Como usar

1. Instale uma biblioteca `LiquidCrystal_I2C` compatível com os métodos `init()` e `backlight()` na Arduino IDE.
2. Abra `display/display.ino`.
3. Conecte o LCD à alimentação adequada ao módulo e os pinos SDA/SCL aos pinos I2C da sua placa, com GND comum.
4. Selecione a placa e a porta na IDE e envie o sketch.

O sketch configura um LCD de 16 colunas e 2 linhas no endereço I2C `0x27`.
Se o módulo usar outro endereço, ajuste o construtor no sketch.
