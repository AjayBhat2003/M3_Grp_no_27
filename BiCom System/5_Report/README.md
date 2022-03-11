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
### *A BiCom system is the extention of the unidirectional RKE to bidirectional RKE system.* 

### ->Features
### **It shall print window status of the car when blue switch is pressed once*
### *It shall print alarm status of the car when blue switch is pressed twice*
### *It shall print car battery information when the blue switch is pressed thrice times*
### ->SWOT Analysis
![swot](https://user-images.githubusercontent.com/46933088/157812492-94d2c31f-7f45-4c6f-9c1e-dac8a0d1755c.jpg)

### ->4W's & 1H :
![Screenshot (112)](https://user-images.githubusercontent.com/98826329/157823876-3c575e95-a0f3-4efc-9cdc-06a9b84ceb3a.png)

### 2.Requirements
### High level requirements
### |Id|High Level Requirements|
|---|-----------------------|
|HLR1|It shall print window status of the car|
|HL02|It shall print alarm status of the car|
|HL03|It shall print car battery information|
|HL04|It shall door status of the car|

### Low Level Requirements

|Id|Low Level Requirements for HL1|ID|Low Level Requirements HL2|
|---|-----------------------|--|----------------------------|
|LLR1.1|If the switch is pressed once, ON all LED's	|LLR2.1|If the switch is pressed twice, OFF LED's|


|Id|Low Level Requirements for HL3|ID|Low Level Requirements HL4|
|---|-----------------------|--|----------------------------|
|LLR3.1|If the switch is pressed three times, ON all LED's in clockwise manner|LLR4.1|If the switch is pressed FOUR times, ON all LED's in anti-clockwise manner|

### 3.Architecture 
### ->Design
### Flow Chart-1
![me_flow](https://user-images.githubusercontent.com/46984887/157809006-c8c1554d-2f32-4781-a298-2e2993a474a2.PNG)

### ->Behavioural Design
### Flow Chart-2
![m3_flow_2](https://user-images.githubusercontent.com/46984887/157809196-ce01b88c-75d6-4edb-9293-d24afede6167.PNG)

### 4.Test_plan_output
# HIGH LEVEL TEST PLAN

|Test|Description|Input|Expected output|Actual Output|
|---|-------------|----------|-------------|-----------------|
|01|Window Status|switch pressed once|shall print window status of the car|shall print window status of the car|
|02|Alarm Status|switch pressed twice|shall print alarm status of the car|shall print alarm status of the car|
|03|Car Battery Info|switch pressed three times|shall print car battery information|shall print car battery information|
|04|Door status|switch pressed four times|shall door status of the car|shall door status of the car|

# LOW LEVEL TEST PLAN

|Test|Description|Input|Expected output|Actual Output|
|---|-------------|----------|-------------|-----------------|
|01|Window Status|switch pressed once|shall on all led'|shall on all led's|
|02|Alarm Status|switch pressed twice|shall off all led's|shall off all led's|
|03|Car Battery Info|switch pressed three times|shall on led's once clockwise|shall on led's once clockwise|
|04|Door status|switch pressed four times|shall on led's once anti-clockwise|shall on led's once anti-clockwise













