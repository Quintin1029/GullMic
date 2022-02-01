#include <zephyr.h>
#include <hal/nrf_gpio.h>

#include "microphone.h"

// Selected pins
#define I2S_LRCK_PIN 4
#define I2S_DIN_PIN 5
#define I2S_BCLK_PIN 2
#define I2S_BCLK_PWM_PIN 29
#define I2S_LRCK_PWM_PIN 28
#define HAPTIC_LEFT_PIN 11
#define HAPTIC_RIGHT_PIN 31

// Debug LED pins
#define DBG_PIN_LED2 12
#define DBG_PIN_LED3 13
#define DBG_PIN_19 6
#define DBG_PIN_20 7
#define DBG_PIN_21 8
#define DBG_PIN_28 14
#define DBG_PIN_29 15

// Main variables
uint8_t i;

// Buffer for averaging
#define BUF_AVG_SIZE 10
float freqs_avg_buffer[BUF_AVG_SIZE];
uint8_t freq_curr_index = 0;

int main() {

	// Initialize microphone
	microphone_init(I2S_LRCK_PIN,
					I2S_DIN_PIN,
					I2S_BCLK_PIN,
					I2S_BCLK_PWM_PIN,
					I2S_LRCK_PWM_PIN);

	// Initialize pitch detection audio buffer
	set_pitch_buffer(get_audio_buffer());

	// Start microphone
	microphone_start();

	while(1) {
		//TODO
	}

}