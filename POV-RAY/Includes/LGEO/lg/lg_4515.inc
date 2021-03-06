/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971104 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4515: Slope Brick 10  6 x 8                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4515)
#else
#declare lg_angle=atan2(2.25*LG_PLATE_HEIGHT, 6*LG_BRICK_WIDTH-2*LG_CORNER_SPACE);
#declare lg_4515 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH-2*LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_WALL_WIDTH, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_WALL_WIDTH, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT>
 }
 box {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT>
 }
 box {
  <3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>
 }
 difference {
  union {
   box {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <0, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <-3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   box {
    <-2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 3.5*LG_BRICK_WIDTH+0.06, -2*LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_E, 3.5*LG_BRICK_WIDTH-0.06, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2.5*LG_BRICK_WIDTH+0.06, -2*LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_E, 2.5*LG_BRICK_WIDTH-0.06, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3.5*LG_BRICK_WIDTH+0.06, -2*LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_E, -3.5*LG_BRICK_WIDTH-0.06, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2.5*LG_BRICK_WIDTH+0.06, -2*LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_E, -2.5*LG_BRICK_WIDTH-0.06, -LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-0.06, 2*LG_BRICK_WIDTH+LG_E, -2*LG_PLATE_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+0.06, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-0.06, 2*LG_BRICK_WIDTH+LG_E, -2*LG_PLATE_HEIGHT>,
    <-0.5*LG_BRICK_WIDTH+0.06, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-0.06, -2*LG_BRICK_WIDTH-LG_E, -2*LG_PLATE_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+0.06, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-0.06, -2*LG_BRICK_WIDTH-LG_E, -2*LG_PLATE_HEIGHT>,
    <-0.5*LG_BRICK_WIDTH+0.06, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, -LG_BRICK_WIDTH+0.06, -2*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.06, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0.06, -2*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.06, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, LG_BRICK_WIDTH+0.06, -2*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06, -LG_CORNER_SPACE>
   }
   cylinder {
    <-2.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>,
    <-2.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <-2.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>,
    <-2.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <-2.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>,
    <-2.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <-2.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>,
    <-2.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   object {
    lg_brick_cylinder
    translate <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <-2*LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <-LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <-LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <0, 3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <2*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <LG_BRICK_WIDTH, 0, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <2*LG_BRICK_WIDTH, 0, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <-LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <0, -3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <2*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
  }
  union {
   box {
    <0, 4*LG_BRICK_WIDTH+LG_E, 0>,
    <7*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH-LG_E, LG_BRICK_HEIGHT>
    rotate <0, lg_angle*180/pi, 0>
    translate <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
   }
   box {
    <-3*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH+LG_E, -3*LG_PLATE_HEIGHT-LG_E>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH-LG_E, -3*LG_PLATE_HEIGHT-LG_E>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
 }
 difference {
  box {
   <0, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <(6*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   rotate <0, lg_angle*180/pi, 0>
   translate <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
  }
  union {
   box {
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT+0.15>,
    <2*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
  }
 }
}

#declare lg_4515_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH-2*LG_E, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_WALL_WIDTH, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_WALL_WIDTH, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT>
 }
 box {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT>
 }
 box {
  <3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>
 }
 difference {
  merge {
   box {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <0, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <-3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   box {
    <-2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 3.5*LG_BRICK_WIDTH+0.06, -2*LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_E, 3.5*LG_BRICK_WIDTH-0.06, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2.5*LG_BRICK_WIDTH+0.06, -2*LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_E, 2.5*LG_BRICK_WIDTH-0.06, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3.5*LG_BRICK_WIDTH+0.06, -2*LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_E, -3.5*LG_BRICK_WIDTH-0.06, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2.5*LG_BRICK_WIDTH+0.06, -2*LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_E, -2.5*LG_BRICK_WIDTH-0.06, -LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-0.06, 2*LG_BRICK_WIDTH+LG_E, -2*LG_PLATE_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+0.06, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-0.06, 2*LG_BRICK_WIDTH+LG_E, -2*LG_PLATE_HEIGHT>,
    <-0.5*LG_BRICK_WIDTH+0.06, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-0.06, -2*LG_BRICK_WIDTH-LG_E, -2*LG_PLATE_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+0.06, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-0.06, -2*LG_BRICK_WIDTH-LG_E, -2*LG_PLATE_HEIGHT>,
    <-0.5*LG_BRICK_WIDTH+0.06, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, -LG_BRICK_WIDTH+0.06, -2*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.06, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0.06, -2*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.06, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, LG_BRICK_WIDTH+0.06, -2*LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06, -LG_CORNER_SPACE>
   }
   cylinder {
    <-2.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>,
    <-2.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <-2.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>,
    <-2.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <-2.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>,
    <-2.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <-2.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>,
    <-2.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   object {
    lg_brick_cylinder_clear
    translate <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <-2*LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <-LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <-LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <0, 3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <2*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <LG_BRICK_WIDTH, 0, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <2*LG_BRICK_WIDTH, 0, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <-LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <0, -3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <2*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
  }
  union {
   box {
    <0, 4*LG_BRICK_WIDTH+LG_E, 0>,
    <7*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH-LG_E, LG_BRICK_HEIGHT>
    rotate <0, lg_angle*180/pi, 0>
    translate <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
   }
   box {
    <-3*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH+LG_E, -3*LG_PLATE_HEIGHT-LG_E>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH-LG_E, -3*LG_PLATE_HEIGHT-LG_E>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
 }
 difference {
  box {
   <0, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <(6*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   rotate <0, lg_angle*180/pi, 0>
   translate <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
  }
  union {
   box {
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT+0.15>,
    <2*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
  }
 }
}

#end
