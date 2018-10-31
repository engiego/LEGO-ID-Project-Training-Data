/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/* 20071230 Lutz Uhlmann fixed stud orientation                                */
/* 20071230 Lutz Uhlmann fixed some edge cylinders                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3474: Wing Tail 4 x 8                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_3474)
#else
#declare lg_angle1=atan2(LG_BRICK_WIDTH,3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE);
#declare lg_angle2=30.050420698831200/180*pi;
#declare lg_3474 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle2), 3.5*LG_BRICK_WIDTH+(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*sin(lg_angle2), -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle2), 3.5*LG_BRICK_WIDTH+(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*sin(lg_angle2), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    box {
     <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
     <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, LG_E, -LG_PLATE_HEIGHT-LG_E>,
     <0, -LG_BRICK_WIDTH, 0>
     rotate <0, 0, -lg_angle1*180/pi>
     translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    }
   }
   box {
    <2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_E, -(LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE)/cos(lg_angle1), -LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle1*180/pi>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <-LG_E, -(3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(lg_angle1), -LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle1*180/pi>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   difference {
    union {
     torus {
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     torus {
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0>,
      <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2
     }
    }
    union {
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH+LG_E, 4*LG_BRICK_WIDTH+LG_E, LG_E>,
      <LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT-LG_E>
     }
     box {
      <LG_BRICK_WIDTH/2+LG_E, 0, LG_E>,
      <-LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/2-LG_E, -LG_PLATE_HEIGHT-LG_E>
      rotate <0, 0, -lg_angle2*180/pi>
      translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0>
     }
     difference {
      box {
       <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
       <-LG_KNOB_RADIUS, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
       rotate <0, 0, -lg_angle2*180/pi>
       translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0>
      }
      box {
       <LG_BRICK_WIDTH/2+LG_E, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_TOP_HEIGHT+LG_E>,
       <0, 4.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-2*LG_E>
      }
     }
    }
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH/2, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, 4*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-2*LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     union {
      box {
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT>,
       <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -(3.3*LG_BRICK_WIDTH+LG_BRICK_WIDTH/2*sin(lg_angle2))/cos(lg_angle2), -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
      }
      box {
       <-LG_BRICK_WIDTH/2, 0, -LG_CORNER_SPACE>,
       <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -(3.3*LG_BRICK_WIDTH+LG_BRICK_WIDTH/2*sin(lg_angle2))/cos(lg_angle2), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      }
      box {
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
       <LG_BRICK_WIDTH, -(3.3*LG_BRICK_WIDTH+LG_BRICK_WIDTH/2*sin(lg_angle2))/cos(lg_angle2), -LG_TOP_HEIGHT>
      }
      rotate <0, 0, -lg_angle2*180/pi>
      translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <LG_BRICK_WIDTH/2, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_E, -LG_TOP_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, 0>,
      <-LG_BRICK_WIDTH/2, -LG_E, -LG_TOP_HEIGHT>
     }
    }
    union {
     box {
      <-LG_WALL_WIDTH-LG_E, 0, -LG_PLATE_HEIGHT>,
      <LG_WALL_WIDTH+LG_E, -2*LG_WALL_WIDTH, 0>
      rotate <0, 0, -lg_angle2*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_E>,
      <-2.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
     }
     box {
      <LG_BRICK_WIDTH, LG_E, -LG_TOP_HEIGHT-LG_E>,
      <0, -4*LG_BRICK_WIDTH, LG_E>
      rotate <0, 0, -lg_angle1*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <-LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <-LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <1.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
    }
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH, 0> //-LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_CORNER_SPACE>
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-0.15, 3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-0.15, 3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   object {
    lg_plate_column
    translate <LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2+0.06, 3*LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-0.06, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    box {
     <-LG_BRICK_WIDTH, LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
     <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
    }
    box {
     <-LG_BRICK_WIDTH, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, -(3.3*LG_BRICK_WIDTH+LG_BRICK_WIDTH/2*sin(lg_angle2))/cos(lg_angle2), -LG_PLATE_HEIGHT-LG_E>
     rotate <0, 0, -lg_angle2*180/pi>
     translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0>
    }
   }
   object {
    lg_plate_cylinder
    translate <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <1.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH+LG_E, -LG_PLATE_HEIGHT>
 }
 difference {
  box {
   <-LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
  }
  union {
   box {
    <-LG_BRICK_WIDTH, 0, 0>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, -(3.3*LG_BRICK_WIDTH+LG_BRICK_WIDTH/2*sin(lg_angle2))/cos(lg_angle2), -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <-LG_BRICK_WIDTH, 0, 0>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, (3.3*LG_BRICK_WIDTH+LG_BRICK_WIDTH/2*sin(lg_angle2))/cos(lg_angle2), -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_BRICK_WIDTH/2, -3.5*LG_BRICK_WIDTH, 0>
   }
  }
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
}

#declare lg_3474_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle2), 3.5*LG_BRICK_WIDTH+(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*sin(lg_angle2), -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle2), 3.5*LG_BRICK_WIDTH+(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*sin(lg_angle2), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    box {
     <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
     <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, LG_E, -LG_PLATE_HEIGHT-LG_E>,
     <0, -LG_BRICK_WIDTH, 0>
     rotate <0, 0, -lg_angle1*180/pi>
     translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    }
   }
   box {
    <2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_E, -(LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE)/cos(lg_angle1), -LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle1*180/pi>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <-LG_E, -(3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(lg_angle1), -LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle1*180/pi>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   difference {
    merge {
     torus {
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     torus {
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0>,
      <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2
     }
    }
    union {
     object {
      lg_knob_inner_space_clear
      translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH+LG_E, 4*LG_BRICK_WIDTH+LG_E, LG_E>,
      <LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT-LG_E>
     }
     box {
      <LG_BRICK_WIDTH/2+LG_E, 0, LG_E>,
      <-LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/2-LG_E, -LG_PLATE_HEIGHT-LG_E>
      rotate <0, 0, -lg_angle2*180/pi>
      translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0>
     }
     difference {
      box {
       <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
       <-LG_KNOB_RADIUS, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
       rotate <0, 0, -lg_angle2*180/pi>
       translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0>
      }
      box {
       <LG_BRICK_WIDTH/2+LG_E, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_TOP_HEIGHT+LG_E>,
       <0, 4.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-2*LG_E>
      }
     }
    }
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH/2, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, 4*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-2*LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    merge {
     merge {
      box {
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT>,
       <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -(3.3*LG_BRICK_WIDTH+LG_BRICK_WIDTH/2*sin(lg_angle2))/cos(lg_angle2), -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
      }
      box {
       <-LG_BRICK_WIDTH/2, 0, -LG_CORNER_SPACE>,
       <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -(3.3*LG_BRICK_WIDTH+LG_BRICK_WIDTH/2*sin(lg_angle2))/cos(lg_angle2), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      }
      box {
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
       <LG_BRICK_WIDTH, -(3.3*LG_BRICK_WIDTH+LG_BRICK_WIDTH/2*sin(lg_angle2))/cos(lg_angle2), -LG_TOP_HEIGHT>
      }
      rotate <0, 0, -lg_angle2*180/pi>
      translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <LG_BRICK_WIDTH/2, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_E, -LG_TOP_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, 0>,
      <-LG_BRICK_WIDTH/2, -LG_E, -LG_TOP_HEIGHT>
     }
    }
    union {
     box {
      <-LG_WALL_WIDTH-LG_E, 0, -LG_PLATE_HEIGHT>,
      <LG_WALL_WIDTH+LG_E, -2*LG_WALL_WIDTH, 0>
      rotate <0, 0, -lg_angle2*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_E>,
      <-2.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
     }
     box {
      <LG_BRICK_WIDTH, LG_E, -LG_TOP_HEIGHT-LG_E>,
      <0, -4*LG_BRICK_WIDTH, LG_E>
      rotate <0, 0, -lg_angle1*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     object {
      lg_knob_inner_space_clear
      translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space_clear
      translate <LG_BRICK_WIDTH/2, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space_clear
      translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space_clear
      translate <LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space_clear
      translate <-LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space_clear
      translate <-LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space_clear
      translate <1.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
    }
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH, 0> //-LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_CORNER_SPACE>
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-0.15, 3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-0.15, 3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-(LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE)*sin(lg_angle1), 3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   object {
    lg_plate_column_clear
    translate <LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2+0.06, 3*LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-0.06, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    box {
     <-LG_BRICK_WIDTH, LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
     <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
    }
    box {
     <-LG_BRICK_WIDTH, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, -(3.3*LG_BRICK_WIDTH+LG_BRICK_WIDTH/2*sin(lg_angle2))/cos(lg_angle2), -LG_PLATE_HEIGHT-LG_E>
     rotate <0, 0, -lg_angle2*180/pi>
     translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0>
    }
   }
   object {
    lg_plate_cylinder_clear
    translate <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <1.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH+LG_E, -LG_PLATE_HEIGHT>
 }
 difference {
  box {
   <-LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
  }
  union {
   box {
    <-LG_BRICK_WIDTH, 0, 0>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, -(3.3*LG_BRICK_WIDTH+LG_BRICK_WIDTH/2*sin(lg_angle2))/cos(lg_angle2), -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <-LG_BRICK_WIDTH, 0, 0>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, (3.3*LG_BRICK_WIDTH+LG_BRICK_WIDTH/2*sin(lg_angle2))/cos(lg_angle2), -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_BRICK_WIDTH/2, -3.5*LG_BRICK_WIDTH, 0>
   }
  }
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
}

#end