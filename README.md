# micromodular
---
### Main Goal
I don't want to attempt to re-invent the wheel but I would like to use my limited knowledge of programming to come up with some sort of system for synthesis. I will try to "invent everything here" and make my own standard I will try to follow. It may be as simple as just using the analog outs of 1 pico that I can connect to another pico and have some way of manipulating that module.

I think if I attempt to come up with my own way that I may make all kinds of mistakes but also *happy accidents*

Where it makes sense I will try to use RPI Pico / ESP32 / etc. Whatever makes the most sense will hopefully be the route I take.

Research the EURO rack format or any other format I could make or use to build some of these modules. For everything... Try to stick to a standard.
### Main Modules

Going forward all reference to **CV** will be assumed to be whatever communication protocol I end up on.

- Oscillator
- Step Sequencer
- Utility (Mult & Math)
- Filter
- Amp
- Midi to **CV**


## Oscillator
---
### Target Features
- [ ] PWM Output
- [ ] Input 'CV'
- [ ] Range
- [ ] Offset (Tuning)

Will use the Pi Pico for this as it has enough PWM channels. For now everything should be manually controlled until a sequencer can be figured out.

## Step Sequencer (8 step)
---
### Target Features
- [ ] Input notes with a potentiomenter
- [ ] Using 3 LEDs to display step position (Use Binary as a ref 0 - 7 to display 1 - 8)
- [ ] Snap to musical note (meh!)
- [ ] Tempo selector
- [ ] Midi/CV converted inputs (To assign notes)
