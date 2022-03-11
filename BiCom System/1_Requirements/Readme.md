
#  Bicom System

# Description

### *A BiCom system is the extention of the unidirectional RKE to bidirectional RKE system.* 

# Features

### *It shall print window status of the car when blue switch is pressed once*
### *It shall print alarm status of the car when blue switch is pressed twice*
### *It shall print car battery information when the blue switch is pressed thrice times*
### *It shall print door status of the car when the blue switch is pressed four times*


# High Level Requirements

|Id|High Level Requirements|
|---|-----------------------|
|HLR1|It shall print window status of the car|
|HL02|It shall print alarm status of the car|
|HL03|It shall print car battery information|
|HL04|It shall door status of the car|

# Low Level Requirements

|Id|Low Level Requirements for HL1|ID|Low Level Requirements HL2|
|---|-----------------------|--|----------------------------|
|LLR1.1|If the switch is pressed once, ON all LED's	|LLR2.1|If the switch is pressed twice, OFF LED's|


|Id|Low Level Requirements for HL3|ID|Low Level Requirements HL4|
|---|-----------------------|--|----------------------------|
|LLR3.1|If the switch is pressed three times, ON all LED's in clockwise manner|LLR4.1|If the switch is pressed FOUR times, ON all LED's in anti-clockwise manner|
