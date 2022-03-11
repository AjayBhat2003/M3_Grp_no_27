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
|04|Door status|switch pressed four times|shall on led's once anti-clockwise|shall on led's once anti-clockwise|