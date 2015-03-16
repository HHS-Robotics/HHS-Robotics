// Created on Fri January 30 2015
void drive_foward_and_turn_riqht();

int main()
{
	wait_for_milliseconds(2000);//make bigger for bigger square
	void drive_foward_and_turn_riqht ();
	void drive_foward_and_turn_riqht ();
	void drive_foward_and_turn_riqht ();
	void drive_foward_and_turn_riqht ();
	ao();
	return 0;
}

void drive_forward_and_turn_right()
{
	motor(0,100);
	motor(3,100);
	wait_for_milliseconds(2000);
	motor (0,0);
	motor(3,0);
	wait_for_milliseconds(2000);
	motor(0,0);
	motor(3,20);
	wait_for_milliseconds(2000);
	motor (0,0);
	motor(3,0);
}
	
