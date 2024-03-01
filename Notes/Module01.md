## Introduction and Background

### Data -> Communications -> Networking

Imagine you're in a room with a friend. You want to show them a picture (data) on your phone. You hold up your phone (source) and they see the picture (the picture is delivered). This is simple communication.

Now, if you want to send this picture to a friend in another city, you use your phone to upload it (source), and it travels through the internet (transmission system), and then your friend downloads it (destination). 

- **Data**: This is the picture on your phone.
- **Communications**: The act of you uploading it and your friend downloading it.
- **Networking**: The internet that connects your phone to your friend's phone.

With networking, we can send this picture not just to one friend, but to many friends all over the world, and it can be not just a picture but also texts, videos, and more. Networks like LAN allow us to connect within small areas, like sharing the picture with a family member in the same house. WANs help us share the picture with friends across the country. The Internet is the biggest network that lets us share the picture with anyone, anywhere.

### Simplified Communications Model

Imagine you’re at a campsite and you want to send a message to your friend at another campsite across the lake. Here’s how the communication process works:

- **Source**: You write a note (the data) to your friend. You are the source.
- **Transmitter**: You put the note into a bottle (this acts like the transmitter) and seal it.
- **Transmission System**: You throw the bottle into the lake (the lake is the transmission system) which carries the bottle towards the other campsite.
- **Receiver**: Your friend picks up the bottle (the receiver), opens it, and reads the note.
- **Destination**: The message in the note is the information received by your friend, who is the destination.

This is a simple analogy for data transfer in a communication system, which works similarly whether it’s a handwritten note or a digital packet of data being sent over the internet.

### Simplified Communication Models

Let’s extend the previous example to include digital communication:

- **Source**: You type a message on your phone.
- **Transmitter**: Your phone (transmitter) converts the text into a signal.
- **Transmission System**: The signal travels through a network (transmission system), like a cellular network that spans over large distances.
- **Receiver**: Your friend’s phone receives the signal.
- **Destination**: The phone converts the signal back into a text message that your friend can read.

In the digital world, the transmission system is much more complex, involving various technologies to carry signals across distances, but the basic process is the same as the bottle in the lake analogy.

### Transmission Line

The transmission line is like a bridge that connects two points for communication:

- **Transmission Line**: It’s the path that connects the transmitter to the receiver. Like a bridge that allows cars to travel across a river, the transmission line allows data to travel from one device to another.
- **Wired Transmission**: This is like a solid bridge made of cables, such as fiber optics, where data travels in the form of light.
- **Wireless Transmission**: This is like a ferry that carries cars across the river without a solid connection to the land, similar to how data travels through the air via radio waves in Wi-Fi or Bluetooth connections.

With these types of transmissions, we aim for a balance between capacity (how much data can travel), reliability (how consistently data can travel without errors), and cost.

### Local Area Networks (LAN)

Imagine a library with several computers where visitors can search for books, read e-books, or access the library's database. Here, the LAN is like the library's own private network, connecting all the computers together.

- **Small coverage area**: Just like the library is confined to a single building, a LAN typically covers a small geographical area like a single building or a campus.
  
- **Ownership**: The library owns the computers, just as an organization owns and operates the devices within a LAN.

- **Data rate**: The computers in the library are connected by high-speed cables, allowing for quick data transfer, similar to how LANs usually provide higher data rates compared to WANs due to their limited scope and direct connections.

- **Example technologies**: In our library, computers might be connected via Ethernet cables, which is a common technology for LANs. If visitors use their own devices, they might connect to the library’s Wi-Fi, which is a form of Wireless LAN.

This LAN allows all the devices within the library to communicate with each other quickly and efficiently. For example, when a librarian adds a new book to the system, all computers update their catalogs instantly.

### Wide Area Networks (WAN)

Consider the scenario of sending a package from your home in one country to a friend in another. A courier service is required to carry this package across cities, countries, and continents.

- **Large Geographical Area**: Just like the courier service that operates over vast distances, a WAN connects devices across cities, countries, or even continents. It's much bigger than a LAN or MAN.

- **Multiple Organizations**: Many different businesses and people use the same courier service to send packages. Similarly, a WAN carries data for numerous organizations.

- **Technologies Used**: 
  - **Circuit Switching**: This is like booking a direct flight for your package. The path is exclusive to your package until it's delivered.
  - **Packet Switching**: This is like sending your package through regular mail, where it may switch between different transportation methods (cars, planes, etc.) and share the journey with other packages.
  - **Frame Relay**: Think of it as a trackable mail service where your package follows a set path with checkpoints.
  - **Asynchronous Transfer Mode (ATM)**: This is like an express delivery service, breaking your package into smaller pieces, sending them through the fastest route available, and then reassembling them at the destination.

- **Metropolitan Area Network (MAN)**: It's the middle ground between LAN and WAN, akin to a regional courier that handles deliveries within a particular metropolitan area, faster than national services but covering a larger area than your local LAN.

WANs enable communication over a larger scale, much like how international phone calls connect people across the world, utilizing various technologies to ensure data gets where it needs to go efficiently and reliably.

### The Internet Origins

The Internet, which you're using right now to read this, didn't start out as the vast, interconnected web we know today. It began as ARPANET in 1969, a project by the U.S. Department of Defense. The goal was to create a network that could withstand outages and still keep communications going. 

Imagine a spider web. If you cut one strand, the rest of the web still holds together. ARPANET was somewhat like that; it could route information through many different paths. Later, a set of rules for communication over this network was established, called TCP/IP, which is like agreeing on a common language to be understood by anyone, regardless of their native language.

### The Internet

Now, the Internet is a colossal network of networks. It connects devices from all over the world, regardless of the different technologies they use. For instance, even if one computer is using Wi-Fi and another is connected via an Ethernet cable, they can still talk to each other through the Internet. It's like having an international group chat where people can join the conversation using any type of phone, whether it's a smartphone or a landline.

### The Internet - A "Nuts and Bolts" View

Taking a closer look at how the Internet works, it's made up of billions of devices, like your smartphone, laptop, or even smart home devices. These are all considered "hosts" at the edge of the Internet. They use various apps and services to communicate, like sending emails, streaming videos, or browsing social media.

The data travels through various communication links like fiber optic cables (which use light to transmit data), copper cables (like the ones in your home's telephone line), radio signals (used for Wi-Fi and mobile phones), and satellites. The speed of these links, known as bandwidth, can vary greatly; for instance, a fiber optic link can handle much more data at once than a traditional copper cable.

### Network Edge and Network Core

At the network edge, we have all the devices we use daily. These include personal devices like your phone (clients) and the servers that store websites you visit. For example, when you stream a movie, your phone is the client, and the streaming service's server is what sends you the movie data.

The network core is like the heart of the Internet, made up of routers and switches that direct your data to where it needs to go. If we go back to the spider web analogy, these routers and switches are like the points where the strands intersect, guiding the information through the web to reach the correct destination.

### Internet Structure - "A Network of Networks"

The Internet is often described as a "network of networks" because it connects many smaller networks together. This structure includes local Internet Service Providers (ISPs) you might use at home, regional ISPs that cover larger areas, and Tier-1 ISPs like Sprint, which provide the backbone of the Internet, connecting all the smaller networks together.

This tiered structure ensures that data can travel across the world, hopping from one network to another, until it reaches its destination. It's like taking a series of connecting flights to travel from a small town to a major city across the globe.
