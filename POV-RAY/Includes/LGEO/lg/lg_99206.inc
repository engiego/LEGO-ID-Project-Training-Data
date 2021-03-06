/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_99206: Plate 2 x 2 x 0.667 with Two Studs On Side and Two Raised         */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20121215 Owen Burgoyne                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_99206)
#else
#declare LENGTH = 2;
#declare WIDTH = 2;
#declare lg_99206 = 
union {
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  union {
   box {
    <0, LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
    <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT>
   }
   box {
    <0, LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
    <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT>
   }
  }
  box {
   <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_E>,
   <LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_PLATE_INNER_HEIGHT>
  }
  box {
   <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_E>,
   <LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
  }
  object {
   lg_knob_inner_space
   translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
  }
  object {
   lg_knob_inner_space
   translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
  }
  object {
   lg_knob_inner_space
   translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
  }
  object {
   lg_knob_inner_space
   translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
  }
 }
 difference{
  union {
   object {
    lg_plate_cylinder
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>,
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
    LG_CYLINDER_RADIUS
   }
  }
  box {
   <0, LG_BRICK_WIDTH-LG_E, LG_PLATE_HEIGHT-LG_E>,
   <LENGTH*LG_BRICK_WIDTH, WIDTH*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
  }
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH, 0, 2*LG_PLATE_HEIGHT-LG_KNOB_RADIUS>,
  <0.5*LG_BRICK_WIDTH, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_KNOB_RADIUS>,
  LG_KNOB_RADIUS
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH, 0, 2*LG_PLATE_HEIGHT-LG_KNOB_RADIUS>,
  <1.5*LG_BRICK_WIDTH, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_KNOB_RADIUS>,
  LG_KNOB_RADIUS
 }
 object {
  lg_tech_knob
  rotate <90, 0, 0>
  translate <0.5*LG_BRICK_WIDTH, 0, 2*LG_PLATE_HEIGHT-LG_KNOB_RADIUS>
 }
 object {
  lg_tech_knob
  rotate <90, 0, 0>
  translate <1.5*LG_BRICK_WIDTH, 0, 2*LG_PLATE_HEIGHT-LG_KNOB_RADIUS>
 }
 translate <-LG_BRICK_WIDTH, 0.5*-LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
 rotate <0, 0, 90>
}

#declare lg_99206_clear = 
merge {
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  merge {
   box {
    <0, LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
    <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT>
   }
   box {
    <0, LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
    <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT>
   }
  }
  box {
   <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_E>,
   <LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_PLATE_INNER_HEIGHT>
  }
  box {
   <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_E>,
   <LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
  }
  object {
   lg_knob_inner_space
   translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
  }
  object {
   lg_knob_inner_space
   translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
  }
  object {
   lg_knob_inner_space
   translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
  }
  object {
   lg_knob_inner_space
   translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
  }
 }
 difference{
  merge {
   object {
    lg_plate_cylinder
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>,
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
    LG_CYLINDER_RADIUS
   }
  }
  box {
   <0, LG_BRICK_WIDTH-LG_E, LG_PLATE_HEIGHT-LG_E>,
   <LENGTH*LG_BRICK_WIDTH, WIDTH*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
  }
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH, 0, 2*LG_PLATE_HEIGHT-LG_KNOB_RADIUS>,
  <0.5*LG_BRICK_WIDTH, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_KNOB_RADIUS>,
  LG_KNOB_RADIUS
 }
 object {
  lg_tech_knob
  rotate <90, 0, 0>
  translate <0.5*LG_BRICK_WIDTH, 0, 2*LG_PLATE_HEIGHT-LG_KNOB_RADIUS>
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH, 0, 2*LG_PLATE_HEIGHT-LG_KNOB_RADIUS>,
  <1.5*LG_BRICK_WIDTH, LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_KNOB_RADIUS>,
  LG_KNOB_RADIUS
 }
 object {
  lg_tech_knob
  rotate <90, 0, 0>
  translate <1.5*LG_BRICK_WIDTH, 0, 2*LG_PLATE_HEIGHT-LG_KNOB_RADIUS>
 }
 translate <-LG_BRICK_WIDTH, 0.5*-LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
 rotate <0, 0, 90>
}

#end
