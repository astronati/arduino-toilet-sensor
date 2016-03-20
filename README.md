# Toilet Sensor

The scope of this script is to know if the toilet is free or not.
Given the assumption that there is no window in the toilet, you need to satisfy following requirements to say that there is a chance that someone could be in the toilet:
- Door is closed.
- Light is turned on.

To match these requirements we need at least of two sensors:
- A magnetic one to establish if the door is closed.
- A photoresistor to detect light in the room.

## License
This package is released under the [MIT license](LICENSE.md).
