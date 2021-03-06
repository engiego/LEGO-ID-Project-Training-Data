/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/* 20080117 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4744: Brick 2 x 4 x 2 with Curved Top                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4744)
#else
#declare lg_4744 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH>
   }
   difference {
    union {
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH
     }
     torus {
      LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
     }
     torus {
      LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH+LG_E, 2*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH>,
      <-LG_BRICK_WIDTH-LG_E, -LG_E, -2*LG_BRICK_WIDTH-LG_E>
     }
     box {
      <LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>,
      <-LG_BRICK_WIDTH-LG_E, -LG_E, LG_E>
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, 0, 0>,
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 0, 0>,
      LG_BRICK_WIDTH-LG_WALL_WIDTH
      scale <1, 1, (LG_BRICK_WIDTH-LG_TOP_HEIGHT)/(LG_BRICK_WIDTH-LG_WALL_WIDTH)>
      translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
     }
    }
   }
   object {
    lg_knob
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_knob
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 box {
  <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 box {
  <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>
 }
 box {
  <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 #declare CYL_Y = -1;
 #while (CYL_Y < 2)
  difference {
   cylinder {
    <0, CYL_Y*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_E>,
    <0, CYL_Y*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, CYL_Y*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+2*LG_E>,
    <0, CYL_Y*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS
   }
  }
  torus {
   LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
   LG_CYLINDER_WALL_WIDTH/2
   rotate <90, 0, 0>
   translate <0, CYL_Y*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
  }
  #declare CYL_Y = CYL_Y + 1;
 #end
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.04, -LG_TOP_HEIGHT+LG_E>,
  <LG_KNOB_RADIUS, 0.04, -5*LG_PLATE_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.04, -LG_TOP_HEIGHT+LG_E>,
  <-LG_KNOB_RADIUS, 0.04, -5*LG_PLATE_HEIGHT>
 }
}

#declare lg_4744_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH>
   }
   difference {
    merge {
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH
     }
     torus {
      LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
     }
     torus {
      LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH+LG_E, 2*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH>,
      <-LG_BRICK_WIDTH-LG_E, -LG_E, -2*LG_BRICK_WIDTH-LG_E>
     }
     box {
      <LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>,
      <-LG_BRICK_WIDTH-LG_E, -LG_E, LG_E>
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, 0, 0>,
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 0, 0>,
      LG_BRICK_WIDTH-LG_WALL_WIDTH
      scale <1, 1, (LG_BRICK_WIDTH-LG_TOP_HEIGHT)/(LG_BRICK_WIDTH-LG_WALL_WIDTH)>
      translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
     }
    }
   }
   object {
    lg_knob_clear
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_knob_clear
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 box {
  <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 box {
  <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>
 }
 box {
  <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 #declare CYL_Y = -1;
 #while (CYL_Y < 2)
  difference {
   cylinder {
    <0, CYL_Y*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_E>,
    <0, CYL_Y*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, CYL_Y*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+2*LG_E>,
    <0, CYL_Y*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS
   }
  }
  torus {
   LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
   LG_CYLINDER_WALL_WIDTH/2
   rotate <90, 0, 0>
   translate <0, CYL_Y*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
  }
  #declare CYL_Y = CYL_Y + 1;
 #end
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.04, -LG_TOP_HEIGHT+LG_E>,
  <LG_KNOB_RADIUS, 0.04, -5*LG_PLATE_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.04, -LG_TOP_HEIGHT+LG_E>,
  <-LG_KNOB_RADIUS, 0.04, -5*LG_PLATE_HEIGHT>
 }
}

#end
