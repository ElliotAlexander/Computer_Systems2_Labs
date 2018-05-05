/* COMP2215: Task 02---MODEL ANSWER */
/* For La Fortuna board.            */


#include <avr/io.h>
#include "lcd/lcd.h"


#define BUFFSIZE 256

void init(void);

void main(void) {
    init();
    display_string("Hello Southampton!\n");
    display_string("Hello UK!\n");
    
    // infinite print test
    // demonstrates newline at end of X, and clearscreen at end of y.
    //display_string("WaMarkus, please please please see this! Yesterday on the 19th of January, I went on the server for a bit of fun as I normally would as this is one of my favourite servers of all time. Anyway, when I went on I had some fun with my lightning spells and casting it in the air because it looks cool, and I was just about to log off when a [Broadcast] came up and it went like this [Broadcast] The next person to die, talk or leave will be banned. So the only other people that were on apart from myself was Mcpulp and somebody else I forgot their name but I'm sure they are in the comments somewhere below, (it may have been Howzieky), so I knew it was Mcpulp because before that he had been killing me for no apparent reason, and so I was staying on there, to scared to leave, when a new person joins the game for the first time, he says \"Hi\" and I think he also said something like Why isn't anyone talking?. I wanted so badly to warn him but before I knew it, it said he left the game, so I knew he had just been banned, after that the other person who was on with me kept on falling out of the world and hitting the ground too hard, and then, of course, he was banned too. And then Mcpulp says: \"Meepy\" and I say \"Yes\" he replies \"You talked\" and so I countered by saying \"But it was only the first person to die, talk or leave, each of those have already been done by other players.\". He says \"Yes I know, I banned them, you won\". I was about to ask if this was some sick joke, but then he said \"If you really want to leave this server and come back on, you have to state in 30 (or 10 I can't remember) ways how you are gay\" I had done about 4 reasons, fake of course, and then he said I had 10 seconds left, that was when I put my foot down and said never mind this just ban me now. He asked me if I had any last words, I said: \"Yes, I loved this server I still do really, but the Co-owner has ruined it and I may as well leave now\" and so before he could ban me I logged off, I came back on later though and I hadn't been banned. The next day however (today) I went back on and saw both you WaMarkus (hopefully you're reading this) and Mcpulp were on, I started to interrogate Mcpulp asking him if yesterday was some joke on me, or if somebody knew his password and went onto this server, I only got to say however: \"Mcpulp what was all that about yesterday?\". He never replied, I asked again, and then he muted me. I stayed on for a while longer and tried to talk to ZexyZek but since I was muted the most I could do was jump in front of him. Please please PLEASE WaMarkus if you see this you must believe me, check the chat log and you will see what has been written on the broadcast. For now this is all I can do to tell you my story and please anyone else who believes me convince WaMarkus it is true.");
}


void init(void) {
    /* 8MHz clock, no prescaling (DS, p. 48) */
    CLKPR = (1 << CLKPCE);
    CLKPR = 0;

    init_lcd();
}
