# SimplisticVM

Very old relic from back when I intended to have Waypoint run on VMs (which would be very close to the hardware and written in assembly).
That never happened because the performance penalty would be too high, and would involve too much unnecessary work to try to do simple things.

Also used Xlib because why not.


__*THIS PROJECT IS NO LONGER ACTIVE*__
___
Simple attempt at implementing a virtual machine, because why not.
Architecture is 64-bit, and intended to try and be as minimalistic as possible for Waypoint. (Simulate the bare minimum expected of a processor where Waypoint will be supported.)

Nice looking readme is a todo.


Dependencies:
  - Requires some sort of an X server.
  - That's it! Goal is to have as few dependencies as possible, aiming for maximum compatibility with the fewest libraries possible.

TODO:
  - Chuck Xlib stuff out and replace everything with XCB + rendering with GPU acceleration (Vulkan)
