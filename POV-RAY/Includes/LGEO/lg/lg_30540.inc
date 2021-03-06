/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080817 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30540: Hinge Brick 1 x 2 Locking with 2 Fingers horizontal on end        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30540)
#else
#declare lg_30540 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  difference {
   // hinge double finger locking
   union {
    torus {
     LG_KNOB_RADIUS-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
    }
    torus {
     LG_KNOB_RADIUS-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
    }
    cylinder {
     <LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, 0>,
     <0.36, -LG_BRICK_WIDTH/2, 0>,
     LG_KNOB_RADIUS-LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
     <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     <0.36-LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     <0.36-LG_CORNER_SPACE, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <0.36, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     <LG_WALL_WIDTH, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>
    }
    box {
     <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS>
    }
    cone {
     <0.13, -LG_BRICK_WIDTH/2, 0>, 0.13
     <LG_WALL_WIDTH+LG_E, -LG_BRICK_WIDTH/2, 0>, LG_WALL_WIDTH+LG_E
    }
   }
   union {
    #declare ROT = -5;
    #while (ROT < 5)
     union {
      cylinder {
       <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
       <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
       0.04
      }
      difference {
       cylinder {
        <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
        <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
        0.04+LG_CORNER_SPACE
       }
       torus {
        0.04+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
       }
      }
      difference {
       cylinder {
        <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
        <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
        0.04+LG_CORNER_SPACE
       }
       torus {
        0.04+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
       }
      }
      rotate <(ROT+0.5)*90/4, 0, 0>
      translate <0, -LG_BRICK_WIDTH/2, 0>
     }
     #declare ROT = ROT + 1;
    #end
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
   rotate <0, 90, 0>
   translate <0, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
  }
  union {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 difference {
  box {
   <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob
  translate <0, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  translate <0, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_brick_column
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
}

#declare lg_30540_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  difference {
   // hinge double finger locking
   merge {
    torus {
     LG_KNOB_RADIUS-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
    }
    torus {
     LG_KNOB_RADIUS-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
    }
    cylinder {
     <LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, 0>,
     <0.36, -LG_BRICK_WIDTH/2, 0>,
     LG_KNOB_RADIUS-LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
     <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     <0.36-LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     <0.36-LG_CORNER_SPACE, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <0.36, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     <LG_WALL_WIDTH, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>
    }
    box {
     <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS>
    }
    cone {
     <0.13, -LG_BRICK_WIDTH/2, 0>, 0.13
     <LG_WALL_WIDTH+LG_E, -LG_BRICK_WIDTH/2, 0>, LG_WALL_WIDTH+LG_E
    }
   }
   merge {
    #declare ROT = -5;
    #while (ROT < 5)
     merge {
      cylinder {
       <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
       <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
       0.04
      }
      difference {
       cylinder {
        <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
        <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
        0.04+LG_CORNER_SPACE
       }
       torus {
        0.04+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
       }
      }
      difference {
       cylinder {
        <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
        <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
        0.04+LG_CORNER_SPACE
       }
       torus {
        0.04+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
       }
      }
      rotate <(ROT+0.5)*90/4, 0, 0>
      translate <0, -LG_BRICK_WIDTH/2, 0>
     }
     #declare ROT = ROT + 1;
    #end
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
   rotate <0, 90, 0>
   translate <0, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
  }
  merge {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 difference {
  box {
   <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob_clear
  translate <0, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  translate <0, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_brick_column_clear
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
}

#end
