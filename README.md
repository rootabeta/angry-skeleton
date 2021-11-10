# angry-skeleton
A skeleton that yells at you when you type commands wrong

## Features
- Handles Ctrl-C
- Harmless, yet penalizes you by interrupting your workflow and forcing you to think about what you've done
- You will never repeat whatever typo you're making after being made fun of by an ASCII skeleton two or three times

## History
I originally wrote this program when I bounced between Windows and Linux, and kept typing dir when I meant ls. I wrote a program to have a skeleton laugh at me whenever I fucked up, and seize my terminal for 10 seconds, then planted it in my /bin. It broke the habit pretty quickly. 
I recently switched back to Manjaro after mainlining Debian, and found myself trying to install things with apt. I looked for the source for my old dir program, and couldn't find it - only a compiled bin - so I used strings to extract the skeleton, shoved it into a new file, and rewrote the rest from scratch. 

Feel free to modify or otherwise use as needed. 
