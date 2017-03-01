#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("terminal"); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("setxkbmap us"); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("wget --output-document=peach.png http://img03.deviantart.net/65d1/i/2015/281/6/5/princess_peach_wallpaper_by_theblazypics-d9ceb3f.png && gsettings set org.gnome.desktop.background picture-uri file://$PWD/peach.png && setxkbmap es && exit && exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500000);
}
