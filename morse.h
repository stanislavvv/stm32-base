/* morse functions */
/* not for production use */

#define DIT_LENGTH 200 /* length of dot in ms */
#define DAH_LENGTH DIT_LENGTH * 3 /* length of dash in ms */
#define LED_PORT GPIOC
#define LED_PIN GPIO13


/* long pause */
#define lspc() vTaskDelay(pdMS_TO_TICKS(DAH_LENGTH));

/* short pause */
#define sspc() vTaskDelay(pdMS_TO_TICKS(DIT_LENGTH));

#define LED_on() gpio_clear(LED_PORT,LED_PIN);

#define LED_off() gpio_set(LED_PORT,LED_PIN);

/* send morse character */
void send_letter(char c);
/* send string */
void send_string(char s[]);

