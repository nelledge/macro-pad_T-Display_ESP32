extern BleKeyboard bleKeyboard;

void button_2_1 (){
    button_press();
    showBottomHalfText(one_2, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F1);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(one_2, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(one_2, background_color_lock);};
    }

void button_2_2 (){
    button_press();
    showBottomHalfText(two_2, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F2);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(two_2, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(two_2, background_color_lock);};
    }

void button_2_3 (){
    button_press();
    showBottomHalfText(three_2, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F3);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(three_2, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(three_2, background_color_lock);};
    }

void button_2_4 (){
    button_press();
    showBottomHalfText(fhour_2, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F4);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(fhour_2, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(fhour_2, background_color_lock);};
    }

void button_2_5 (){
    button_press();
    showBottomHalfText(five_2, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F5);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(five_2, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(five_2, background_color_lock);};
    }

void button_2_6 (){
    button_press();
    showBottomHalfText(six_2, ST77XX_WHITE);
    if (lock_button == false){
        // bleKeyboard.press(KEY_LEFT_SHIFT);
        // bleKeyboard.press(KEY_LEFT_ALT);
        // bleKeyboard.press(KEY_F6);
        // delay(dely_time);
        // bleKeyboard.releaseAll();
        bleKeyboard.print("123");
        delay(100);
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(six_2, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(six_2, background_color_lock);};
    }

void button_2_7 (){
    button_press();
    showBottomHalfText(seven_2, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F7);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(seven_2, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(seven_2, background_color_lock);};
    }

void button_2_8 (){
    button_press();
    showBottomHalfText(eight_2, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F8);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(eight_2, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(eight_2, background_color_lock);};
    }

void button_2_9 (){
    button_press();
    showBottomHalfText(nine_2, ST77XX_WHITE);
    if (lock_button == false){
        bleKeyboard.press(KEY_LEFT_SHIFT);
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F9);
        delay(dely_time);
        bleKeyboard.releaseAll();
    }
    delay(dely_extra_time);
    if (lock_button == false){showBottomHalfText(nine_2, ST77XX_BLACK);}
    if (lock_button == true){showBottomHalfText(nine_2, background_color_lock);};
    }
