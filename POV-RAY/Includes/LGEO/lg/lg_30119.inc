/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980815 Lutz Uhlmann                                                       */
/* 20080128 Lutz Uhlmann fixed stud orientation                                */
/* 20080128 Lutz Uhlmann fixed wrong sized box in mid of slope                 */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30119: Wing 8 x 4 - 2 Downwards                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30119)
#else
#declare lg_angle1=atan2(5*LG_BRICK_WIDTH,9*LG_PLATE_HEIGHT);
#declare lg_angle2=atan2(LG_BRICK_WIDTH, 5*LG_BRICK_WIDTH);
#declare lg_30119 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   object {
    lg_plate_cylinder
    translate <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+4*LG_PLATE_HEIGHT*sin(lg_angle1)/cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)*2.88/4+0*sin(lg_angle1)-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <1.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH, 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <1.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -10*LG_PLATE_HEIGHT>
   }
   box {
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   object {
    lg_tech_knob
    translate <2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -4*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <6.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -9*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH/2, 0>
   }
   box {
    <0, 0, 0>,
    <5*LG_BRICK_WIDTH, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT+2*LG_CORNER_SPACE>
    matrix <1,  -0.2, -0.72, 
            0,  1,    0,
            0,  0,    1,
            LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT+2*LG_CORNER_SPACE+LG_E>
    matrix <1,  -0.2, -0.72,
            0,  1,    0,
            0,  0,    1,
            LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_column
  translate <2.5*LG_BRICK_WIDTH, 0, -5*LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_column
  translate <6.5*LG_BRICK_WIDTH, 0, -10*LG_PLATE_HEIGHT>
 }

 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+4*LG_PLATE_HEIGHT*sin(lg_angle1)/cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+4*LG_PLATE_HEIGHT*sin(lg_angle1)/cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)*2.88/4+0*sin(lg_angle1)-LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)*2.88/4+0*sin(lg_angle1)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -1.2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <0.95*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <7*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT>
 }
 box {
  <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <7*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <6.05*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT>,
  <6*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  union {
   box {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT>
   }
  }
  union {
   box {
    <2*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -4*LG_PLATE_HEIGHT>
   }
   box {
    <1, 1, 0>,
    <0, -1, -3>
    rotate <0, -lg_angle1*180/pi, 0>
    translate <LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
   }
  }
 }
 difference {
  union {
   box {
    <LG_BRICK_WIDTH+4*LG_PLATE_HEIGHT*sin(lg_angle1)/cos(lg_angle1), 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <1.8*LG_BRICK_WIDTH, -1.2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH+4*LG_PLATE_HEIGHT*sin(lg_angle1)/cos(lg_angle1)-LG_CORNER_SPACE, 1.2*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <1.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.2*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH+4*LG_PLATE_HEIGHT*sin(lg_angle1)/cos(lg_angle1)-LG_CORNER_SPACE, 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <1.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
   }
  }
  union {
   box {
    <3.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT>,
    <2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
   }
   difference {
    box {
     <1, 1, 0>,
     <0, -1, -3>
     rotate <0, -lg_angle1*180/pi, 0>
     translate <LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
    }
    box {
    <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT>,
    <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT>
    }
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -2.5*LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -2.5*LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
  }
 }
 difference {
  box {
   <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT>,
   <6*LG_BRICK_WIDTH-0.08, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <6.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <6.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
  }
 }
 box {
  <LG_BRICK_WIDTH-LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.08>,
  <LG_BRICK_WIDTH+0.05, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
 }
 difference {
  box {
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 difference {
  box {
   <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <5*LG_BRICK_WIDTH/sin(lg_angle1), -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   rotate <0, 90-lg_angle1*180/pi, 0>
   translate <LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
  }
  union {
   box {
    <0, LG_BRICK_WIDTH+LG_E, -3>,
    <6*LG_BRICK_WIDTH, 0, 0.5>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, -LG_BRICK_WIDTH-LG_E, -3>,
    <6*LG_BRICK_WIDTH, 0, 0.5>
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>,
    <-0.7, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.1>
    rotate <0, 90-lg_angle1*180/pi, 0>
    translate <LG_BRICK_WIDTH+4*LG_PLATE_HEIGHT*sin(lg_angle1)/cos(lg_angle1), 0, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>,
    <0.7, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.1>
    rotate <0, 90-lg_angle1*180/pi, 0>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)*2.88/4+0*sin(lg_angle1)-LG_CORNER_SPACE>
   }
   box {
    <5.8*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <6.12*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -10*LG_PLATE_HEIGHT>
   }
  }
 }
 box {
  <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_E, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)*2.88/4+0*sin(lg_angle1)-LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_E, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)*2.88/4+0*sin(lg_angle1)-2*LG_CORNER_SPACE>
 }
}

#declare lg_30119_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   object {
    lg_plate_cylinder_clear
    translate <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+4*LG_PLATE_HEIGHT*sin(lg_angle1)/cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)*2.88/4+0*sin(lg_angle1)-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <1.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH, 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <1.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -10*LG_PLATE_HEIGHT>
   }
   box {
    <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   object {
    lg_tech_knob_clear
    translate <2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -4*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <6.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -9*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH/2, 0>
   }
   box {
    <0, 0, 0>,
    <5*LG_BRICK_WIDTH, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT+2*LG_CORNER_SPACE>
    matrix <1,  -0.2, -0.72, 
            0,  1,    0,
            0,  0,    1,
            LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT+2*LG_CORNER_SPACE+LG_E>
    matrix <1,  -0.2, -0.72,
            0,  1,    0,
            0,  0,    1,
            LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_column_clear
  translate <2.5*LG_BRICK_WIDTH, 0, -5*LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_column_clear
  translate <6.5*LG_BRICK_WIDTH, 0, -10*LG_PLATE_HEIGHT>
 }

 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+4*LG_PLATE_HEIGHT*sin(lg_angle1)/cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+4*LG_PLATE_HEIGHT*sin(lg_angle1)/cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)*2.88/4+0*sin(lg_angle1)-LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)*2.88/4+0*sin(lg_angle1)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -1.2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <0.95*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <7*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT>
 }
 box {
  <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <7*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <6.05*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT>,
  <6*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  merge {
   box {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT>
   }
  }
  union {
   box {
    <2*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -4*LG_PLATE_HEIGHT>
   }
   box {
    <1, 1, 0>,
    <0, -1, -3>
    rotate <0, -lg_angle1*180/pi, 0>
    translate <LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
   }
  }
 }
 difference {
  merge {
   box {
    <LG_BRICK_WIDTH+4*LG_PLATE_HEIGHT*sin(lg_angle1)/cos(lg_angle1), 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <1.8*LG_BRICK_WIDTH, -1.2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH+4*LG_PLATE_HEIGHT*sin(lg_angle1)/cos(lg_angle1)-LG_CORNER_SPACE, 1.2*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <1.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.2*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH+4*LG_PLATE_HEIGHT*sin(lg_angle1)/cos(lg_angle1)-LG_CORNER_SPACE, 1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <1.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
   }
  }
  union {
   box {
    <3.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT>,
    <2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
   }
   difference {
    box {
     <1, 1, 0>,
     <0, -1, -3>
     rotate <0, -lg_angle1*180/pi, 0>
     translate <LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
    }
    box {
    <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT>,
    <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT>
    }
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -2.5*LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -2.5*LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
  }
 }
 difference {
  box {
   <7*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT>,
   <6*LG_BRICK_WIDTH-0.08, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <6.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <6.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
  }
 }
 box {
  <LG_BRICK_WIDTH-LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.08>,
  <LG_BRICK_WIDTH+0.05, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
 }
 difference {
  box {
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 difference {
  box {
   <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <5*LG_BRICK_WIDTH/sin(lg_angle1), -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   rotate <0, 90-lg_angle1*180/pi, 0>
   translate <LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
  }
  union {
   box {
    <0, LG_BRICK_WIDTH+LG_E, -3>,
    <6*LG_BRICK_WIDTH, 0, 0.5>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, -LG_BRICK_WIDTH-LG_E, -3>,
    <6*LG_BRICK_WIDTH, 0, 0.5>
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>,
    <-0.7, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.1>
    rotate <0, 90-lg_angle1*180/pi, 0>
    translate <LG_BRICK_WIDTH+4*LG_PLATE_HEIGHT*sin(lg_angle1)/cos(lg_angle1), 0, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>,
    <0.7, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.1>
    rotate <0, 90-lg_angle1*180/pi, 0>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)*2.88/4+0*sin(lg_angle1)-LG_CORNER_SPACE>
   }
   box {
    <5.8*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <6.12*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -10*LG_PLATE_HEIGHT>
   }
  }
 }
 box {
  <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_E, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)*2.88/4+0*sin(lg_angle1)-LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_E, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)*2.88/4+0*sin(lg_angle1)-2*LG_CORNER_SPACE>
 }
}

#end


