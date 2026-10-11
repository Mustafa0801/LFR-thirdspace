# Journal for week 4

## Muhammad
it took more than 5 hours diagnosing the power problem because the onboard 5v regulator was fully faulty on the l298n.
i had to constantly reassmble the circut and that took too much time as well. eventually the motors worked but on the 4th step of every sketch they would jitter and arduino would blink and restart.
it didnt help that the schematics for our buck werent clear, so i had to go kicad and make them myself to put into the circuit. i tried to model it on kicad so it would be a clear map of what was going where since i didnt have a multimeter and couldnt do it quickly/had to go through the process of elimination after any sort of small relocation  (the lapse recording was paused and i forgot to resume the next 30 minutes, and the file didnt save :(((( ). 
i heated up the screw terminal base using a knife and wedged paper beneath the screw terminal on the right of the l298n and that saved it. eventually i had to remove it once my screw was fully in because the paper was annoying. on the next day on the school floor, however everything worked miraculously, but on the 4th take the same jitter happened.
i introduced a 3rd battery pack but it only made the motors vibrate more and the new alkaline cells died off again.
further debugging in the arduino ide with the script revealed that the arduino really WAS restarting. 
with a little help from claude i realised that my battery connections were either faulty or that the batteries themselves just couldnt power.
i tried them on the motors and after rejoining the series circuit carefully it was clear the batteries died. I soldered the l293d in the hopes that it could be a better alternative to our l298n but at that time it was useless (no batteries) so i went to work on soldering my  sensor, bending and figuring out the very short pins was difficult but i did it using big pliers and tweezers, as well as checked my soldering iron temperatures (it was heating up in weird ways it was borrowed from a senior and had to be tested because sometimes too hot sometimes stinked of metal and sometimes too cold to do much).
then i finally soldered the headers onto the analogue 8 way sensor and sent it to my partner. the left motor the entire time was extremely rough and i thought it was a voltage/connection problem but it wasnt which i discovered after reattaching it.
the robot was spinning in the air the last day but arduino restarted when i put it down just like last week. 
another reason the l293d couldnt be used at that time was because the buck i used was doing 5v to uno only and i was scared the IC was gonna burn my motors if we put 12v through it, but later we decided to test it anyway.

## Mustafa0801
