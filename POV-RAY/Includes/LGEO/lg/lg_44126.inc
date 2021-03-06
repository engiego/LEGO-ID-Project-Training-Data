/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20120811 Owen Burgoyne                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_44126: Slope Brick Curved 6 x 2                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_44126)
#else
#declare LENGTH = 6;
#declare WIDTH = 2;
#declare CURVE = 7.263;
#declare lg_angle1=65.32484819;
#declare lg_angle2=90-lg_angle1;
#declare lg_44126 = 
union {
 // EDGES
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <(WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <(WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 sphere {
  <(WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE, ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 intersection {
  difference {
   union {
    torus {
     CURVE, LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>
    }
    torus {
     CURVE, LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>
    }
   }
   cylinder {
    <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>, 
    <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    2*LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>, 
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    2*LG_CORNER_SPACE
   }
  }
  box {
   <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
   <WIDTH*LG_BRICK_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE/2, LG_BRICK_HEIGHT>
  }
 }
 // TOP CURVE
 intersection {
  difference {
   cylinder {
    <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>,
    <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>,
    CURVE+LG_CORNER_SPACE
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>,
    <WIDTH*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>,
    CURVE-LG_WALL_WIDTH
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, LG_E>,
    <0.5*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT_LOGO>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, LG_E>,
    <1.5*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT_LOGO>,
    LG_KNOB_RADIUS
   }
  }
  box {
   <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
   <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-(LG_CORNER_SPACE/2), LG_BRICK_HEIGHT>
  }
 }
 // SIDE WALLS
 intersection {
  union {
   difference {
    union {
     box {
      <0, LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT>
     }
    }
    box {
     <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_E>,
     <WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.0001, LG_BRICK_HEIGHT-LG_WALL_WIDTH>
    }
   }
  }
  union {
   cylinder {
    <5, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>, <-5, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>, CURVE
   }
   box {
    <-LG_E, -LG_E, -LG_E>,
    <WIDTH*LG_BRICK_WIDTH+LG_E, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT+LG_E>
   }
  }
 }
 // INNER WALLS AND CYLINDERS
 intersection {
  union {
   object {
    lg_brick_cylinder
    translate <1*LG_BRICK_WIDTH, 1*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_brick_cylinder
    translate <1*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_brick_cylinder
    translate <1*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_brick_cylinder
    translate <1*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_brick_cylinder
    translate <1*LG_BRICK_WIDTH, 5*LG_BRICK_WIDTH, 0>
   }
   difference {
    union {
     box {
      <0, 2*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, LG_WALL_WIDTH>,
      <WIDTH*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_HEIGHT>
     }
     box {
      <0, 4*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, LG_WALL_WIDTH>,
      <WIDTH*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_HEIGHT>
     }
    }
    cylinder {
     <1*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>,
     <1*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>,
     LG_CYLINDER_RADIUS-LG_E
    }
    cylinder {
     <1*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, 0>,
     <1*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>,
     LG_CYLINDER_RADIUS-LG_E
    }
   }
  }
  union {
   cylinder {
    <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>,
    <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>,
    CURVE+LG_CORNER_SPACE
   }
   box {
    <LG_CORNER_SPACE, 0, 0>,
    <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
  }
 }
 box {
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_E, LG_CORNER_SPACE>,
  <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
 }
 translate <-WIDTH/2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
 rotate <0, 0, -90>
}

#declare lg_44126_clear = 
merge {
 // EDGES
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <(WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <(WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 sphere {
  <(WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE, ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, ((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 intersection {
  difference {
   union {
    torus {
     CURVE, LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>
    }
    torus {
     CURVE, LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>
    }
   }
   cylinder {
    <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>, 
    <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    2*LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>, 
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    2*LG_CORNER_SPACE
   }
  }
  box {
   <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
   <WIDTH*LG_BRICK_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE/2, LG_BRICK_HEIGHT>
  }
 }
 // TOP CURVE
 intersection {
  difference {
   cylinder {
    <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>,
    <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>,
    CURVE+LG_CORNER_SPACE
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>,
    <WIDTH*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>,
    CURVE-LG_WALL_WIDTH
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, LG_E>,
    <0.5*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT_LOGO>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, LG_E>,
    <1.5*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT_LOGO>,
    LG_KNOB_RADIUS
   }
  }
  box {
   <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
   <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-(LG_CORNER_SPACE/2), LG_BRICK_HEIGHT>
  }
 }
 // SIDE WALLS
 intersection {
  union {
   difference {
    union {
     box {
      <0, LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT>
     }
    }
    box {
     <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_E>,
     <WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.0001, LG_BRICK_HEIGHT-LG_WALL_WIDTH>
    }
   }
  }
  union {
   cylinder {
    <5, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>, <-5, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>, CURVE
   }
   box {
    <-LG_E, -LG_E, -LG_E>,
    <WIDTH*LG_BRICK_WIDTH+LG_E, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT+LG_E>
   }
  }
 }
 // INNER WALLS AND CYLINDERS
 intersection {
  union {
   object {
    lg_brick_cylinder
    translate <1*LG_BRICK_WIDTH, 1*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_brick_cylinder
    translate <1*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_brick_cylinder
    translate <1*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_brick_cylinder
    translate <1*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_brick_cylinder
    translate <1*LG_BRICK_WIDTH, 5*LG_BRICK_WIDTH, 0>
   }
   difference {
    union {
     box {
      <0, 2*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, LG_WALL_WIDTH>,
      <WIDTH*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_HEIGHT>
     }
     box {
      <0, 4*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, LG_WALL_WIDTH>,
      <WIDTH*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_HEIGHT>
     }
    }
    cylinder {
     <1*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>,
     <1*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>,
     LG_CYLINDER_RADIUS-LG_E
    }
    cylinder {
     <1*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, 0>,
     <1*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>,
     LG_CYLINDER_RADIUS-LG_E
    }
   }
  }
  union {
   cylinder {
    <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>,
    <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-CURVE>,
    CURVE+LG_CORNER_SPACE
   }
   box {
    <LG_CORNER_SPACE, 0, 0>,
    <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
  }
 }
 box {
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_E, LG_CORNER_SPACE>,
  <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
 }
 translate <-WIDTH/2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
 rotate <0, 0, -90>
}

#end
