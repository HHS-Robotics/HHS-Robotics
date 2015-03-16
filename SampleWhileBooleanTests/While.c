// Created on Mon February 2 2015

int main()
{
	// initialize servo, camera, etc here?.
	// if you are using a Create you should uncomment the next line
	//create_connect();

	wait_for_light(0); // change the port number to match where your robot 

	shut_down_in(119); // shut off the motors and stop the Create after 119 seconds
	// note that shut_down_in should immediately follow wait_for_light!!

	
//II Repeat while the digital touch sensor on port *15 is equal to 0 (i.e., while not pressed).
while (digital(15 ) - 0 );
{
//Code to repeat ...
{
//Repeat while the digital touch sensor on port *15 is not equal to 1 (i.e., while not
//pressed) .
//Note: this would have the same result as the loop above.
while (digital (15) ! - 1 );
{
//Code to repeat ...
{
//II Repeat while the analog sensor on port '3 reads less than 512.
while (a nalog( 3 ) < 512);
{
//Cooe to repeat ...
{
//Repeat while "countdown" (a variable) is greater than or equal to 1.
while (countdown >- 1 );
{
//Code to repeat
{
	//create_disconnect();
	ao();
	return 0;
}
//drive forward until sensor is pressed
int main()
	{
		motors(0,100);
		motors(3,100);
		
		while (digital(0) !=1)
		{printf("Driving forward\n");
		}
		ao();
		
		return 0;
	}
//move the servo arm using a loop
		int main()
		{
		//set counter to 200
		int counter;
		counter =200;
		//Set servo_ position to counter
		set servo_ position(0, counter);
		//Enable servos and move
		enable "servos() ;
		while (counter <1000)	
		wait_for_milliseconds(1000) ;
		counter = counter + l00;
		set_servo_position(0, counter);
		disable_servos();
		return 0;
