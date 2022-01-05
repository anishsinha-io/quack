# Stacks and Queues

This repository implements ~generic~ stacks and queues in C because the normal way is too boring for me. Push whatever
you want into to the stacks and enqueue whatever you want in the queue. You want to put a double then a pointer to a
random struct and then a string into a stack? Go for it. Also, this repo uses opaque data types so no one can ~~~~~
easily mess with the internals of the implementation but this is C so if you can do pointer arithmetic, go ham I guess.
The queue implementation has random access but because of this I had to sacrifice making it a priority queue, so it's
just a vanilla queue with random access, so you can do stuff like

`get_index(queue1, <index>);`

and it'll be done in `O(1)` time.

Dope, see you on the next one.

-A