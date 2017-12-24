/*
 *  Program to evaluate face values.
 *  Released under the Vegas Public License.
 *  (c) 2014 The College Blackjack Team.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    char card_name[3];

    puts("Enter the card_name: ");
        scanf("%2s", card_name);

    int val = 0;

    if(card_name[0] == 'K' || card_name[0] == 'k'){
        val = 10;
    }

    else if(card_name[0] == 'Q' || card_name[0] == 'q'){
        val = 10;
    }

    else if(card_name[0] == 'J' || card_name[0] == 'j'){
        val = 10;
    }

    else if(card_name[0] == 'A' || card_name[0] == 'a'){
        val = 11;
    }

    else{
        val = atoi(card_name); // XXX atoi = converts the text into a number.
    }

    // Check if the value is 3 to 6
    if ((val >= 3) && (val <= 6)){
        puts("Count has gone up");
    }
    
    else if(val == 10){
        puts("Count has gone down");
    }

    return 0;
}
