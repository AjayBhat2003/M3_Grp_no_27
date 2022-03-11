# *Objective-*

### *Keyless entry systems are used to remotely lock, unlock and start your car's engine using RF signals.*

# *Description-*

### **This project describes about the Remote keyless entry (RKE) system is a system designed to remotely lock or unlock access to automobiles.** 

### **The term remote keyless system (RKS), also called keyless entry or remote central locking, refers to a lock that uses an electronic remote control as a key which is activated by a handheld device or automatically**

### *Remote keyless entry (RKE) system is a system designed to remotely lock or unlock access to automobiles.* 

### *1.	 RKE transmission requires two components - a transmitter and a receiver.* 
### *Transmitter - RKE key fob, other ID device with RKE integrated* 
### *Receiver - Body Control ECU, other ECU with integrated RKE* 
### *2.	 RKE operates by broadcasting radio waves on a particular frequency unidirectionally.* 
### *3.	RKE systems implement encryption and rolling code algorithms to prevent car thieves from intercepting and spoofing the telegrams.* 

# *Abstract*
### *RKE systems for cars can be used to control the vehicle's ignition system, security alarm, horn, lights and trunk. RKEs are also used to control entry to premises and specific areas of buildings, such as garages. While the use of RKE is uncommon on buildings outside of businesses, some home automation and security systems rely on the technology as well.*

# *Features-*

### *1. Print lock – (Blue switch on- All led on at the same time)*

### *2. Print unlock - (Blue switch press two times- All led off at the same time)*

### *3. Print alarm activation/deactivation - (Blue switch press three times- All led on in clockwise manner)*

### *4. Print approach light - (Blue switch press four times- All led on in anti-clockwise manner)*

## Requirements

# High Level Requirements

|Id|High Level Requirements|
|---|-----------------------|
|HLR1|System should br provided with wireless locking and unlocking system|
|HL02|System should be provided with wireless alaram activation and deactivation|
|HL03|System should be provided with Approach Light|
|HL04|System shall be made as Hack Proof|

# Low Level Requirements

|Id|Low Level Requirements for HL1|ID|Low Level Requirements HL2|
|---|-----------------------|--|----------------------------|
|LLR1.1|As the button pressed all LED'S should get turned on|LLR2.1|As the button pressed all LED'S should get turned off|
|LLR1.2|As the button pressed all LED'S should get turned on in clockwise manner|LLR2.2|LED'S should glow in a manner Green-->Orange-->Red-->Blue|

|Id|Low Level Requirements for HL3|ID|Low Level Requirements HL4|
|---|-----------------------|--|----------------------------|
|LLR3.1|As the button pressed all LED'S should get turned on in Anticlockwise manner|LLR4.1|LED'S should glow in a manner Green-->Blue-->Red-->Orange|
|LLR3.2|System should be Encrypted with masked data|LLR4.2|System should provide Random Data each time to ensure more security |










