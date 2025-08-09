extern BleKeyboard bleKeyboard;


void button_1_1 (){
    button_press();
    showBottomHalfText(one_1, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F1);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(one_1, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(one_1, background_color_lock);};
    }

void button_1_2 (){
    button_press();
    showBottomHalfText(two_1, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F2);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(two_1, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(two_1, background_color_lock);}; 
    }

void button_1_3 (){
    button_press();
    showBottomHalfText(three_1, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F3);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(three_1, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(three_1, background_color_lock);};    }

void button_1_4 (){
    button_press();
    showBottomHalfText(fhour_1, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F4);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(fhour_1, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(fhour_1, background_color_lock);};    }

void button_1_5 (){
    button_press();
    showBottomHalfText(five_1, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F5);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(five_1, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(five_1, background_color_lock);};    }

void button_1_6 (){
    button_press();
    showBottomHalfText(six_1, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F6);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(six_1, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(six_1, background_color_lock);};    }

void button_1_7 (){
    button_press();
    showBottomHalfText(seven_1, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F7);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(seven_1, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(seven_1, background_color_lock);};    }

void button_1_8 (){
    button_press();
    showBottomHalfText(eight_1, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F8);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(eight_1, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(eight_1, background_color_lock);};    }

void button_1_9 (){
    button_press();
    showBottomHalfText(nine_1, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F9);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(nine_1, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(nine_1, background_color_lock);};    }
