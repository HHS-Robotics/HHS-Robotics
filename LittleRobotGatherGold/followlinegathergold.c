// Created on Wed March 4 2015 - incomplete

int main()
{
	
	
	// initialize servo, camera, etc here?.
	//enable_servo(2); // power the port and move the servo
	// if you are using a Create you should uncomment the next line

wait_for_light(3); // change the port number to match where your robot 

shut_down_in(119); // shut off the motors and stop the Create after 119 seconds
	// note that shut_down_in should immediately follow wait_for_light!!

	printf("Looking for Gold!\n");
	//go forward
	motor(0, 100);
	motor(2, 100);
	msleep(3000);
	//turn left
	motor(2, -90);
	motor(0, 90);
	msleep(500);
	//go forward to line
	motor(0, 100);
	motor(2, 100);
	msleep(2000);
	//turn left
	motor(2, -90);
	motor(0, 90);
	msleep(500);	
	//follow line until bump
	while (digital(8) != 1)
	{
	  //1.1 If: Is dark detected?
	  if (analog(0) > 512)
	  {
	     // 1.1.1. Turn around.
	     motor (0, -100);
	     motor (2, 100);
		 msleep(750); 
	  } // end if
      // 1.2. Else:
      else
	  {
		// 1.2.1. Turn around.
		motor (0, -100);
		motor (2, 100);
		msleep(750); 
	  } // end else
    } // end while

    //2. Stop motors.
	ao();

	// 3. End the program.
	return 0;
	
	  //drop servo
	
}

	//make 180 degree turn
	//follow line to middle
	//turn right
	//go back to starting box
	//raise servo to leave pom poms
	//set_servo_position(2, 670); // claw open
	//motor();
	//motor();
	//msleep(200);
	//set_servo_position(2, 325);  //claw closes around object
	//disable_servo(2); // servo no longer needed

	//return 0;
