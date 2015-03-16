/* Move the robot towards the largest object on channel 0.
Robots stops if no object is detected*/
//everywhere you see motor(lmotor,#a);motor(rmotor,#b); change that into create_drive_direct(#a,#b); and change ao(); to create_stop(); 
int main(){
	int ch = 0, leftmtr = 0, rghtmtr = 3; // identify channel and motors
	int high = 100, low = -10; // set wheel powers for arc radius
	camera_open();
	printf("Move towards object on channel 0\n");
	printf("Press B button when ready\n\nPress side button to stop\n");
	while(b_button() == 0) { // wait for button press
		msleep(15);
	}
	while(side_button() == 0) { // stop if button is pressed
		camera_update();
		if(get_object_count(ch) > 0) { // if object is seen...
			if(get_object_center_column(ch,0) < 65) { // if object is on left...
				motor(leftmtr,low); motor(rghtmtr,high); // arc left
				printf("It is to the left\n");
			}
			else if(get_object_center_column(ch,0) > 95) {// if object is on right...
				motor(rghtmtr,low); motor(leftmtr,high); // arc right
				printf("It is to the right\n");
			}
			else {
				motor(rghtmtr,high); motor(leftmtr,high); //go straight
				printf("It is directly ahead\n");
			}
		}
		else {
			msleep(15);
			printf("We can't see it\n");
		}
	}
	ao(); // stop because button pressed
	printf("done\n"); return 0;
}
