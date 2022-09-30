# Virtual Server Interaction for Immersive Learning in Hololens

<img src="https://github.com/lightlessdays/Server-MRTK/blob/main/banner.png" width=100%>

A data center or data centre is a building, a dedicated space within a building, or a group of buildings used to house computer systems and associated components, such as telecommunications and storage systems. It is often not possible for students to visualize how servers in data center look like, or what the use of each component of a server is. This problem can be overcomed by the use of immersive technology in Hololens.

The Hololens is Microsoft's take on augmented reality, which they call “mixed reality”. Using multiple sensors, advanced optics, and holographic processing that melds seamlessly with its environment, These holograms can be used to display information, blend with the real world, or even simulate a virtual world.

In this immersive app, we have designed one server rack of a data center, containing firewall, switches, server boxes and other components. When user interacts with the components of the server, a voice also explains the use of each part.

This has been made using Microsoft's MRTK 2.8.

## How to install this app in your Hololens 2 device?

The first step would be to get the IP address of your Hololens device. You can get the IP address by following this video: <a href="https://www.youtube.com/watch?v=BUDOulCUMIk">Finding IP Address on a Hololens</a>.

Next, download the repository and go to HololensBuildFiles directory. Open virtualServer.sln file in your Visual Studio. After it is opened, go to Project > Properties.

![image](https://user-images.githubusercontent.com/37246347/193296559-a9fb66cd-0db8-4f1d-ab0b-0dde4be075e9.png)

Set configuration to Master and ARM64. In the debugging tab, add the IP Address of your Hololens as Machine Name. Make sure that your Hololens and the current device is connected over the same network.

![image](https://user-images.githubusercontent.com/37246347/193296752-1804a577-6b7a-482c-b1cc-0097a2309d1a.png)

Close the window. Go to Debug and then click on Start without Debugging.

![image](https://user-images.githubusercontent.com/37246347/193296948-6a0377ce-83ca-4dc2-b639-3deac757ba1a.png)

Wait for some time and your application will start building on Hololens. It usually takes around 3-10 minutes to build and run on Hololens.

## Screenshots

![Screenshot1](https://user-images.githubusercontent.com/97734029/193299400-9a56eb97-e281-4371-bee6-28fb8778bb20.jpg)

![Screenshot2](https://user-images.githubusercontent.com/97734029/193299393-1feb5a70-eb50-4704-a2a4-27392a3808fa.jpg)


