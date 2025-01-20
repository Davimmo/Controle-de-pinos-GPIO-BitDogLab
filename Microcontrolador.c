#include <stdio.h>
#include "pico/stdlib.h"

// Definição dos pinos GPIO para periféricos
#define LED_RED 10
#define LED_GREEN 11
#define LED_BLUE 12
#define BUZZER 13

// Função para inicializar GPIOs no microcontrolador
void init_gpio() {
    // Inicializar LEDs como saída
    gpio_init(LED_RED);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_put(LED_RED, 0); // Inicialmente desligado

    gpio_init(LED_GREEN);
    gpio_set_dir(LED_GREEN, GPIO_OUT);
    gpio_put(LED_GREEN, 0); // Inicialmente desligado

    gpio_init(LED_BLUE);
    gpio_set_dir(LED_BLUE, GPIO_OUT);
    gpio_put(LED_BLUE, 0); // Inicialmente desligado

    // Inicializar buzzer como saída
    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);
    gpio_put(BUZZER, 0); // Inicialmente desligado
}

// Função para acionar periféricos
void control_output(uint gpio, bool state) {
    gpio_put(gpio, state);
}

int main() {
    stdio_init_all(); // Inicializa a comunicação padrão
    init_gpio(); // Configura GPIOs do microcontrolador

    while (true) {
        // Simulação de controle simples
        printf("Ligando LED vermelho\n");
        control_output(LED_RED, true);
        sleep_ms(500);

        printf("Desligando LED vermelho\n");
        control_output(LED_RED, false);
        sleep_ms(500);

        printf("Ligando buzzer\n");
        control_output(BUZZER, true);
        sleep_ms(500);

        printf("Desligando buzzer\n");
        control_output(BUZZER, false);
        sleep_ms(500);
    }

    return 0;
}
