## Layered Architecture

### Protocol “layers” and reference models

Think of a network as a multi-story building, with each floor representing a layer that has a specific function in the delivery of data from one computer to another. The layers work together to ensure that the data reaches the correct destination, much like the different departments in a company work together to complete a project.

### Example: Organization of air travel

Air travel is organized into layers of service: purchasing a ticket, checking baggage, boarding at gates, and the actual flight routing. Each layer depends on the service below it but doesn't need to know the details of how that service works. Similarly, in network layering, each layer provides services to the one above it and uses services from the one below it.

### Why layering?

Layering helps break down a complex system into manageable parts. For instance, if an airport changes the way it handles baggage, this doesn't affect how tickets are sold. In network layering, changes at one layer (like how data packets are routed) can happen independently of others (like how the data is eventually used by an application).

### Protocol Models

The OSI model is like a seven-floor building, while the TCP/IP model is a more streamlined five-floor version. TCP/IP is the blueprint for the internet, providing guidelines on how data should be transmitted over the network.

### TCP/IP Layers

This describes the 'stack' of layers in a network, from physical cables (physical layer) up to the software applications we use (application layer). For example, when you send an email, it moves from the application layer down through the other layers until it reaches the physical layer, where it's transmitted as electrical signals or light pulses, and then back up through the layers on the recipient's side.

### Layers in Depth

- **Application Layer**: This is where user applications like web browsers, email clients, and file transfer services operate. For example, when you visit a website, your browser uses HTTP (a protocol at the application layer) to request web pages.

- **Transport Layer**: It’s responsible for delivering data between applications reliably. Protocols like TCP ensure that your emails and file downloads are delivered without errors and in the right order, while UDP provides a faster but less reliable service, useful for things like live video streaming where a little bit of data loss is acceptable.

- **Network Layer**: This layer is all about routing data across different networks using protocols like IP. It's like the postal service that finds the best path to deliver your mail to a friend in another country.

- **Data Link Layer**: Imagine a single road connecting two houses; that's like the data link layer which handles the transmission of data across a single network link. It ensures that the data gets to the other side without errors, using protocols like Ethernet for wired connections and Wi-Fi for wireless.

- **Physical Layer**: This is the actual hardware—the cables, the radio waves, the fiber optics—carrying those digital bits across the network.

### TCP/IP Layers

This slide illustrates the vertical organization of the TCP/IP model. The data prepared by each layer uses the services provided by the layer directly below it and provides services to the layer above it. This hierarchical design ensures that each layer only needs to "talk" to its adjacent layers, simplifying the process of data transmission.

### Protocol Data Unit

Each layer of the TCP/IP model has a specific unit of data that it handles:

- **Application Layer**: Handles user data and adds an application-specific header.
- **Transport Layer**: Encapsulates the user data and application header into a segment by adding a transport header.
- **Network Layer**: Further encapsulates into a datagram by adding an IP header.
- **Link Layer**: Encloses the datagram in a frame with a link-layer header and trailer.
- **Physical Layer**: Converts the frame into physical signals for transmission.

### Services, Layering, and Encapsulation

These slides break down the encapsulation process, detailing how each layer adds its own header to the data unit. Here's how it works in sequence:

1. **Transport Layer**: Takes application messages and encapsulates them with a transport header (Ht), forming a segment. This header includes control information like source and destination ports and is used to ensure reliable delivery between processes on different systems.

2. **Network Layer**: Encapsulates the transport segment with a network header (Hn), creating a datagram. This includes the IP addresses needed for routing the segment from the source to the destination host across multiple networks.

3. **Link Layer**: Adds a link-layer header (Hl) to the datagram, making a frame that is ready for transmission over a physical medium to the next directly connected node (neighbor).

4. **Physical Layer**: The final transmission stage, where the frame is converted into a physical signal, such as electrical voltages, light, or radio waves, for actual data transmission over the physical medium.

5. **End-to-End Encapsulation**: The encapsulation diagram shows the complete process from the source to the destination, including how each layer's header is used by the corresponding layer at the destination to retrieve the original message.

The images would typically illustrate this layer-by-layer construction of data as it includes various headers and is prepared for transmission, as well as the reverse process of decapsulation at the receiving end.

This detailed encapsulation process ensures that data integrity and delivery are maintained and that each network device along the path can correctly process and forward the data to its final destination.

### Encapsulation: An End-to-End View

Encapsulation is like sending a letter within multiple envelopes. You write a letter (the message), put it in an envelope (the segment), then put that envelope inside another one (the datagram), and finally, you put all of this inside a parcel (the frame) to be sent.

Here's how it works in networking, step by step:

1. **Application Layer (Message)**:
   - You start with your message, which is the data created by a user application, like typing an email.
   - The application adds a header (Ht) to the message. This header contains control information like the type of application data being sent.

2. **Transport Layer (Segment)**:
   - Next, the transport layer takes the message and adds its own header (Ht), creating a segment.
   - The header added here could include source and destination port numbers, which are like apartment numbers ensuring the data gets to the right application on the destination computer.

3. **Network Layer (Datagram)**:
   - The network layer encapsulates the segment by adding another header (Hn), creating a datagram.
   - This header includes the source and destination IP addresses, like the street addresses for where the data packet is coming from and going to.

4. **Link Layer (Frame)**:
   - Finally, the link layer adds a header (and sometimes a trailer) to the datagram, creating a frame. This frame is what actually gets transmitted across the physical network.
   - The headers here include the MAC addresses of the source and destination network cards, which are like the names on the inside and outside of the parcel.

5. **Physical Layer**:
   - At the physical layer, the frame is turned into a physical signal (like electrical voltage, light, or radio waves) and sent over the actual transmission medium (like Ethernet cables, fiber optics, or Wi-Fi).

6. **Transmission Across Network**:
   - As the data travels across the network, it goes through various devices like switches and routers. These devices use the information in the packet's headers to route it to the correct destination.
   - Switches operate at the link layer and use MAC addresses to forward frames within the same network.
   - Routers operate at the network layer and use IP addresses to forward packets between different networks.

7. **Reaching the Destination**:
   - At the destination, the process is reversed (decapsulation). The frames are processed from the physical layer up to the application layer.
   - Each layer removes its corresponding header (and trailer, if any), utilizing the information within to correctly process and eventually deliver the original message to the appropriate application.

The encapsulation process is crucial because it provides the control information necessary for the data to travel across a network and arrive at the correct destination application reliably and accurately.