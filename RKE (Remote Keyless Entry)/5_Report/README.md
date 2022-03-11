# Table Of Content

### *1.Details about BiCom System*
### *->Description*
### *->Features*
### *->SWOT Analysis*
### *->4W's & 1H*

### *2.Requirements*
### *->High Level Requirements*
### *->low Level Requirements*

### *3.Architecture*
### *->Design*
### *->Behavioural Design*

### *4.Test_plan_output*
### *->High level test plan*
### *->Low level test plan*

### 1.Details about Bicom System 
### ->Description
### **This project describes about the Remote keyless entry (RKE) system is a system designed to remotely lock or unlock access to automobiles.** 

### **The term remote keyless system (RKS), also called keyless entry or remote central locking, refers to a lock that uses an electronic remote control as a key which is activated by a handheld device or automatically**

### *Remote keyless entry (RKE) system is a system designed to remotely lock or unlock access to automobiles.* 

### *1.	 RKE transmission requires two components - a transmitter and a receiver.* 
### *Transmitter - RKE key fob, other ID device with RKE integrated* 
### *Receiver - Body Control ECU, other ECU with integrated RKE* 
### *2.	 RKE operates by broadcasting radio waves on a particular frequency unidirectionally.* 
### *3.	RKE systems implement encryption and rolling code algorithms to prevent car thieves from intercepting and spoofing the telegrams.* 

### ->Features

### *1. Print lock – (Blue switch on- All led on at the same time)*

### *2. Print unlock - (Blue switch press two times- All led off at the same time)*

### *3. Print alarm activation/deactivation - (Blue switch press three times- All led on in clockwise manner)*

### *4. Print approach light - (Blue switch press four times- All led on in anti-clockwise manner)*

### ->SWOT Analysis
### Strength
- Remote Keyless car offer a greater challenge to potential thieves.
- The convenience of a keyless lock makes it easier to get inside your house safely and quickly everytime.
### Weakness
- Tendency to loose your key fob where a traditional car could be more easily accessible in these irritating situations.
- Keyless entry can cost a good bit.
### Threats
- One of the threat of keyless entry is "eavesdropping" where signal sent to a haker when driver presses their key fob to unlock the car.
### Opportunities
- The demand for Keyless entry system is directly influenced by the automotive production and sales activities across the globe.

### ->4W'S & 1H
### Who
- Any person can operate it easily.
### What
- Sensor that detects remote keyless key fob within certain range of vehicle.
### When
- To remotely lock, unlock and start your vehicles enginne using RF signals.
### Where
- It is found in modern vehicles and widely used in automobiles.
### How 
- Developed using microcontroller and implemented it.


### 2.Requirements
### High level requirements

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

### 3.Architecture
## High level design for (RKE System)
![HLD](https://user-images.githubusercontent.com/89115879/157697121-c7291a9e-94c3-4c96-877d-b95cc62df579.PNG)

# Flow Chart
![m3_flow_2](https://user-images.githubusercontent.com/46984887/157809196-ce01b88c-75d6-4edb-9293-d24afede6167.PNG)


### 4.Test_plan_output
# HIGH LEVEL TEST PLAN

|Test|Description|Input|Expected output|Actual Output|
|---|-------------|----------|-------------|-----------------|
|01|lock|switch pressed once|shall lock the car|Shall lock the car|
|02|unlock|switch pressed twice|shall unlock the car|Shall unlock the car|
|03|alarm activate / deactivate|switch pressed three times|shall activate / deactivate alarm|shall activate / deactivate alarm|
|04|approach light|switch pressed four times|Shall turn On approach light|Shall turn On approach light|

# LOW LEVEL TEST PLAN

|Test|Description|Input|Expected output|Actual Output|
|---|-------------|----------|-------------|-----------------|
|01|lock|switch pressed once|shall on all led's|shall on all led's|
|02|unlock|switch pressed twice|shall off all led's|shall off all led's|
|03|alarm activate/deactivate|switch pressed three times|shall on led's once clockwise|shall on led's once clockwise|
|04|approach light|	switch pressed four times|shall on led's once anti-clockwise|shall on led's once anti-clockwise|



