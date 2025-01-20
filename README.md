# Controle de Pinos GPIO - BitDogLab

Vídeo sobre o projeto:
[![Como utilizar o projeto](https://img.youtube.com/vi/GFi8QFWOg74/maxresdefault.jpg)(https://www.youtube.com/watch?v=GFi8QFWOg74)


## Sobre o Projeto
Este projeto, desenvolvido no contexto do **EmbarcaTech**, tem como objetivo explorar os terminais GPIO do microcontrolador **RP2040** da placa **Raspberry Pi Pico W**. Através de uma integração com o simulador **Wokwi** no **Visual Studio Code**, é possível realizar a simulação e verificação do funcionamento dos pinos GPIO para controle de LEDs e um buzzer.

### Principais funcionalidades:
1. **Acionamento de LEDs com o teclado matricial**:
   - **Tecla A**: Aciona o LED vermelho.
   - **Tecla B**: Aciona o LED azul.
   - **Tecla C**: Aciona o LED verde.
   - **Tecla D**: Aciona os três LEDs simultaneamente.
2. **Interações adicionais**:
   - **Tecla #**: Emite som pelo buzzer.
   - **Tecla \***: Acende o LED vermelho e, após um tempo, aciona o buzzer.

### Tecnologias Utilizadas:
- **Microcontrolador**: RP2040 da placa Raspberry Pi Pico W.
- **Simulador**: Wokwi no Visual Studio Code.
- **Linguagem de Programação**: C.

---

## Integrantes do Projeto
- **Davi Bezerra Cavalcanti**
- **João Vitor Maciel Lima**
- **Jaime Fernandes dos Reis Neto**
- **Maria Bianca Vitoria Coelho Marinho de Lima**
- **Yuri Silva Reis**
- **José Ricardo de Souza Santos (zrcrd)**

---

## Como Simular o Projeto
1. **Configurar o Simulador Wokwi**:
   - Certifique-se de que a extensão do Wokwi esteja instalada no Visual Studio Code.
   - Abra o projeto no simulador.
2. **Configurar o Ambiente de Desenvolvimento**:
   - Certifique-se de que o **CMake** esteja instalado e configurado corretamente.
   - Instale a extensão **Raspberry Pi Pico Project** no Visual Studio Code.
3. **Executar o Código**:
   - Compile o código utilizando o ambiente configurado.
   - Utilize o teclado matricial virtual para interagir com os LEDs e o buzzer.

---

## Objetivos de Aprendizado
- **Exploração dos GPIOs**: Entender o funcionamento e controle dos terminais GPIO.
- **Integração com periféricos**: Aprimorar o uso de dispositivos como LEDs, teclado matricial e buzzer.
- **Simulação de Hardware**: Utilizar ferramentas como o Wokwi para testar códigos antes da implementação em hardware real.

---

## Contribuições
Contribuições são bem-vindas! Se você encontrar um bug ou tiver uma ideia para melhorar o projeto, fique à vontade para abrir uma **Issue** ou enviar um **Pull Request**.

