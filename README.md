# Speech Recognition

## Arduino Project

The application we have decided to develop utilizes a mic and led to allow the user to say a voice command. The application then uses a C Sharp program for speech to text, and passes the text to the Arduino project. This is a useful application as it utilizes the LEDS and microphone to achieve its purpose. This lets us learn how to interact with both of these inputs/outputs on the Arduino board.

[Final Deliverable Tutorial Used](https://medium.com/illumination/how-to-make-your-first-voice-project-using-arduino-956bfd494947)

## Agent

- Performance Measure:

The performance of the agent can be quantified by the success it has when interpreting

- Environment:

The environment for this agent is the Arduino board, the laptop and the students around it. It is partially observable, stochastic, episodic, dynamic and discrete.

- Actuator:

For this agent, the actuator is the led lights. These are what produce the corresponding output to the input given by the user.

- Sensor:

The sensor for this agent is the microphone as it is the hardware that takes in user input. It listens for the user to tell it what to do, and waits for the user to do so.

## Ethical Benefits and Implications

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
