# Week 3 Hardware Journal
## Mustafa0801
MONDAY --- First I tested motors more and found that the issue was related to power, so I connected more batteries.  
TUESDAY --- Then tested the sensors a bit, found that they need to be quite low to the ground to detect the line.  
FRIDAY --- Wired the buck to the robot, then tested the draft1 of full code on the track, the movement was a bit jittery and the robot was getting stuck.  
SATURDAY --- Moved the track to the floor instead of the bed and tested again, robot was working fine (aside from the movement being a bit snappy)
however the track itself was still causing issues.  
SUNDAY --- Remade the track on the floor, then tested robot a bit on it. Now the issue wasn't the track rather the robot's structure causing it to get stuck.
Then assembled 3D printed chassis and rewired everything, however the robot was still getting stuck on the ground. It would work fine in the air but on the ground the wheels would just not move, which seemed to be a power issue. Even at max speed the robot couldn't move unless it was constantly pushed a little here and there. Could also be due to faulty motors which is something we may not be able to fix now.
    
<img width="294" height="400" alt="WhatsApp Image 2026-10-05 at 7 28 50 AM" src="https://github.com/user-attachments/assets/17ffc3db-f8fc-4905-9935-fbd6e03e1580" />
<img width="291" height="400" alt="WhatsApp Image 2026-10-05 at 7 28 49 AM" src="https://github.com/user-attachments/assets/5bc0fac2-1c9e-410e-83a8-7bb519307ca1" />
<img width="325" height="400" alt="WhatsApp Image 2026-10-05 at 7 28 51 AM" src="https://github.com/user-attachments/assets/7a7cf083-0955-4917-9000-b722774bd044" />

## Muhammad
Cad journal:
Main things that I did were to make sure all my mounts were proper. It took quite some time and I had to redo them twice or thrice because i realised that either the hole sizes were weird or that my sketch wasnt truly editable or changable later, and so for the sake of making possible edits i redid many sketches on the base plate
I also calculated the volume requires to 3d print the base chassis in the BOM, ans generally just validated my design
I also added a small modular plate thing on the padded area at the top and added mounting holes and weights to the arduino and l298n. Freecad crashed and my files corrupted twice so I had to redo them again. Lastly i imported my model to make sure it sliced properly in the prussa slicer. It did, so I tried to find the center of mass with the weights so I couls find the optimum place to put in the "castor wheel"  (but it didnt end up working properly so I just eyeballed it and called it a day)
