# Report by Trang Hoang and Andre Hance

## Planning, due on January 27th, 2023 by 9:30am

### Timeline

<<<<<<< HEAD
| Timeline        | Tasks            |
| --------------- | ---------------- |
| January 27th    | project planning |
| February 1st    | receive material and start assembling things on the ardunio board |
| February 5st    | adding code to the project |
| January 27th    | project planning |
=======
| Timeline  | Tasks |
| ----------- | ----------- |
|   Feb 1st   |    Build adruino board      |
|   Feb 6th   |    Complete Software / Code |
|   Feb 8th   |    Complete written section |
>>>>>>> 8c07de34d17ca15c245442f98ff5316c42ee00ea

### Hardware

:

- Arduino board: https://docs.arduino.cc/hardware/due

- LED. https://www.amazon.com/DiCUNO-450pcs-Colors-Emitting-Assorted/dp/B073QMYKDM/ref=sr_1_3?keywords=arduino+led&qid=1674678564&sr=8-3

- 220 ohm resistor

- hook-up wires

- SparkFun Electret Microphone Breakout https://www.sparkfun.com/products/12758

- SparkFun Mono Audio Amp Breakout https://www.hackster.io/products/buy/7027?s=BAhJIhIxNTg4OCxQcm9qZWN0BjoGRUY%3D%0A

- Speaker: 0.25W, 8 ohms https://www.hackster.io/products/buy/277?s=BAhJIhIxNTg4OCxQcm9qZWN0BjoGRUY%3D%0A

- Breadboard (generic) https://www.hackster.io/products/buy/42749?s=BAhJIhIxNTg4OCxQcm9qZWN0BjoGRUY%3D%0A

## Arduino Project

:
Describe the application you have chosen to develop and provide a motivation for why it is a useful application. Include  references of all sources you have used throughout this project (URLs are sufficient).

The application we have decided to develop utilizes a mic and led to allow the user to say a voice command. The application then uses a C Sharp program for speech to text, and passes the text to the Arduino project. This is a useful application as it utilizes the LEDS and microphone to achieve its purpose. This lets us learn how to interact with both of these inputs/outputs on the Arduino board.

https://docs.arduino.cc/built-in-examples/basics/Fade

https://www.hackster.io/msb4180/speech-recognition-and-synthesis-with-arduino-2f0363

Final Deliverable Tutorial Used:
https://medium.com/illumination/how-to-make-your-first-voice-project-using-arduino-956bfd494947

## Agent

Explain the characteristics/attributes of your agent, what makes it an agent (within the discussed course content), what makes it rational, what type of an agent it is, and what is its environment task (PEAS).

- Performance Measure:

The performance of the agent can be quantified by the success it has when interpreting  

- Environment:

The environment for this agent is the Arduino board, the laptop and the students around it. It is partially observable, stochastic, episodic, dynamic and discrete.

- Actuator:

For this agent, the actuator is the led lights. These are what produce the corresponding output to the input given by the user.

- Sensor:

The sensor for this agent is the microphone as it is the hardware that takes in user input. It listens for the user to tell it what to do, and waits for the user to do so.


## Challenges and Learning Experiences

Discuss any challenges you have encountered during the work on this lab and  describe what have you learned.

Our first major challenge with this lab was getting the hang of connecting the hardware together. At first we had difficulty following along to the connector diagrams(as seen by the sequence of tutorials used). We learned that the different types of Arduino boards had connectors and pins in different locations. Once we were able to find a tutorial that used the Arduino UNO specifically this was much easier. The next challenge was getting the text to speech set up, it took us a couple more tutorials/iterations to achieve this.

## Ethical Benefits and Implications

In this section, drawing on class discussions and readings, answer the following questions

1. What entities, businesses, organizations do you envision developing the type of the application you have chosen to develop?

Organizations that intend to have speech as their primary source of input would develop similar agents to this but more in depth.

2. Who are the intended users of this technology?

The intended users of this technology could potentially be disabled people, who require hands free input, or consumers that prefer hands free input.

3. Who is not supposed to use this technology?

I wouldn't say that this agent in its current iteration is off limits to anyone.

4. How can the application developed in this lab cause harm?

This specific iteration is seemingly harmless, and we cannot think of a way that it could cause direct harm. However perhaps individuals with epilepsy may avoid using this application as some of the demo presents we created produce flashing lights, and could potentially cause seizures. Although we are not sure if enough light is emitted to be of concern, or if the light changes fast enough.

5. What solutions could be implemented to avoid the harm or to fix the harm described above?

Perhaps if further research was done to certify that this application was indeed capable of causing seizures, a seizure warning would be necessary up front, as well as other precautions.

## Team Work

Describe the details of your team working strategy, specifically explain how did you complete this work as a team and describe the specific contributions of each team member.

We worked together through most of the process, however the commit log can show further depth as to who did what specifically. In broad, we both looked together to find tutorials and get a foothold in the general idea. Then, we began work on assembling the LEDS, and wires to achieve just a simple blinking LED. Andre then created different patterns of LEDS, and hard programmed them in. Then Trang found and implemented a secondary tutorial which allowed us accept user input as speech with the use of a C Sharp program and the computer mic. Then we came together to individualize the project from the tutorial, and add our own unique features to achieve its final implementation.
