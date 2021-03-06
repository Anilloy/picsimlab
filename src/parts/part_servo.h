/* ########################################################################

   PICsimLab - PIC laboratory simulator

   ########################################################################

   Copyright (c) : 2010-2015  Luis Claudio Gambôa Lopes

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

   For e-mail suggestions :  lcgamboa@yahoo.com
   ######################################################################## */

#ifndef PART_SERVO_H
#define	PART_SERVO_H

#include<lxrad.h>
#include"part.h"


class cpart_servo:public part
{
   public:
      String GetName(void){return lxT("Servo motor");};
      cpart_servo(unsigned x, unsigned y);
      ~cpart_servo(void);
      void Draw(void);
      void Process(void);
      String GetPictureFileName(void){return lxT("servo_motor.png");};
      String GetInputMapFile(void){return lxT("servo_motor_i.map");};
      String GetOutputMapFile(void){return lxT("servo_motor_o.map");};
      String GetPropertiesWindowFile(void){return lxT("servo_motor.lxrad");};
      void ConfigurePropertiesWindow(CPWindow *  wprop);
      void ReadPropertiesWindow(void);
      String WritePreferences(void);
      void ReadPreferences(String value);
      unsigned short get_in_id(char * name);
      unsigned short get_out_id(char * name);
    private:  
      unsigned char input_pin;   
      lxBitmap * BackGround;  //Background image
      float angle;
      float angle_;
      unsigned char in_[2];
      int time;
};




#endif	/* PART_SERVO */

