printf("text\n");
wait_for_milliseconds(# milliseconds);
msleep(#milliseceonds);
motor(port #, %power);
mav(port #, velocity);
mrp(port#, evlocity, position);
ao();
enable_servos();
disable_servos();
set_servo_position(port #, position);
wait_for_light(port #);
wait_for_touch(port #);
analog(port #);//sensor reading
digital(port #)//sensor reading
analog_et(port #);//get an ET sensor reading
shut_down_int(time in seconds);//to shut down all motors
