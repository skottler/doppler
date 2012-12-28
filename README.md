# Summary
The is a rewrite of the original version of this project which heavily relied on a transport mechanism that turned out to be inflexible when processing large amounts of data. This new version uses flume and less reliable, but more scalable. It features a TLS-based encryption technology that is good for sending massive amounts of data across a socket.

# Architecture
Doppler is primarily made up of three components. First, the shipper encrypts and compresses the objects containing profiling data. Second, the forwarder sets up a local socket that sits (as sockets do) and sends off the objects over UDP to the receiver. The receiver runs either on a proxy server or on one of the Flume nodes; it decrypts messages and sends them off to Flume where they will the rest of their years being processed and mined.

### Author
Sam Kottler (shk@linux.com)

### License
See LICENSE. Basically this project is licensed under Apache, Version 2.
