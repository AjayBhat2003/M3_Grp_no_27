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