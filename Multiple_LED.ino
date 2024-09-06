/* Multiple LED Telah dimodifikasi 
*/

int timer = 500; // pewaktuan melambat
// array (penyusunan) nomor pin LED
int ledPins[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
int pinCount = 10; // jumlah pin (panjang array)
void setup() {
	// Elemen array penomoran dari 0 sampai (pinCount - 1).
	// Gunakan for loop untuk inisialisai pin sebagai output
	for (int thisPin = 0; thisPin < pinCount; thisPin++)  {
		pinMode(ledPins[thisPin], OUTPUT);      
	}
}
void loop() {
	// loop dari pin rendah ke lebih tinggi
	for (int thisPin = 0; thisPin < pinCount; thisPin++) { 
		// ON-kan pin :
		digitalWrite(ledPins[thisPin], HIGH);   
		delay(timer);                  
		// OFF-kan pin :
		digitalWrite(ledPins[thisPin], LOW);    
	}
	// loop dari pin lebih tinggi ke pin lebih rendah:
	for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--)    { 
		// ON-kan pin :
		digitalWrite(ledPins[thisPin], HIGH);
		delay(timer);
		// OFF-kan pin:
		digitalWrite(ledPins[thisPin], LOW);
	}
}
