/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980702 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6630: Technic Plate 1 x 8 With Teeth/Holes                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6630)
#else
#declare LENGTH = 1;
#declare WIDTH = 4;
#declare lg_6630 = 
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 3.5*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>
   }
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 3.2*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 3.2*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0.06, 3.1*LG_BRICK_WIDTH, -LG_E>,
    <-0.06, 2.8*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   difference {
    union {
     cylinder {
      <0, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
      <0, 3.5*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2
     }
     cylinder {
      <0, 3.5*LG_BRICK_WIDTH, 0.08>,
      <0, 3.5*LG_BRICK_WIDTH, -0.32>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE+LG_E>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2.6*LG_BRICK_WIDTH, -0.32>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE+LG_E>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 2.6*LG_BRICK_WIDTH, -0.32>
     }
     box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE-LG_E>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, 0.08>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE-LG_E>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, 0.08>
     }
     box {
      <-LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2.6*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 2.6*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>
     }
     box {
      <-LG_BRICK_WIDTH/2+LG_E, 3.5*LG_BRICK_WIDTH, 0>,
      <LG_BRICK_WIDTH/2-LG_E, 2.7*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
    }
    union {
     cylinder {
      <0, 3.5*LG_BRICK_WIDTH, 0.08>,
      <0, 3.5*LG_BRICK_WIDTH, -0.32>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 3.5*LG_BRICK_WIDTH, 0.08>,
      <0, 3.5*LG_BRICK_WIDTH, 0>,
      0.3
     }
     cylinder {
      <0, 3.5*LG_BRICK_WIDTH, 0.08+LG_E>,
      <0, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, 3.5*LG_BRICK_WIDTH, -0.24>,
      <0, 3.5*LG_BRICK_WIDTH, -0.32-LG_E>,
      0.3
     }
    }
   }
   #if (MIR=1)
    matrix <1,0,0,0,-1,0,0,0,1,0,0,0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 box {
  <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, 0>
 }
 box {
  <0.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
 }
 box {
  <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, 0>
 }
 box {
  <-0.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare TOOTH = -2.6;
 #while (TOOTH < 2.8)
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE,-0.04+LG_CORNER_SPACE, 0.24>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.2>
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE,-0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE,0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE,-0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE,-0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE,-0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     union {
      cylinder {
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -0.32>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -0.32>,
       LG_CORNER_SPACE
      }
      box {
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -0.5>
      }
      rotate <180*atan2(0.08,0.24)/pi, 0, 0>
      translate <0, 0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>
     }
     union {
      cylinder {
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -0.32>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -0.32>,
       LG_CORNER_SPACE
      }
      box {
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE, 0>,
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -0.5>
      }
      rotate <-180*atan2(0.08,0.24)/pi, 0, 0>
      translate <0, -0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>
     }
    }
    box {
     <LG_BRICK_WIDTH/2, 1.5*LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
     <-LG_BRICK_WIDTH/2, -1.5*LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
    }
   }
   difference {
    union {
     box {
      <LG_BRICK_WIDTH/2, LG_WALL_WIDTH, 0.24-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_CORNER_SPACE-LG_E>
     }
     box {
      <-LG_BRICK_WIDTH/2, LG_WALL_WIDTH, 0.24-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_CORNER_SPACE-LG_E>
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_E>,
      <-LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -0.5>
      rotate <-180*atan2(0.08,0.24)/pi, 0, 0>
      translate <0, -0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH, LG_E>,
      <-LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -0.5>
      rotate <180*atan2(0.08,0.24)/pi, 0, 0>
      translate <0, 0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>
     }
    }
   }
   #if (TOOTH < 2.5)
    box {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH/2, 0>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_WALL_WIDTH, -LG_TOP_HEIGHT>
    }
   #end
   translate <0, TOOTH*LG_BRICK_WIDTH, 0>
  }
  #declare TOOTH = TOOTH +0.4;
 #end
} 

#declare lg_6630_clear = 
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 3.5*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>
   }
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 3.2*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 3.2*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0.06, 3.1*LG_BRICK_WIDTH, -LG_E>,
    <-0.06, 2.8*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   difference {
    merge {
     cylinder {
      <0, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
      <0, 3.5*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2
     }
     cylinder {
      <0, 3.5*LG_BRICK_WIDTH, 0.08>,
      <0, 3.5*LG_BRICK_WIDTH, -0.32>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE+LG_E>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2.6*LG_BRICK_WIDTH, -0.32>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE+LG_E>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 2.6*LG_BRICK_WIDTH, -0.32>
     }
     box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE-LG_E>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, 0.08>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE-LG_E>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 2.6*LG_BRICK_WIDTH, 0.08>
     }
     box {
      <-LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2.6*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 2.6*LG_BRICK_WIDTH, -0.32+LG_CORNER_SPACE>
     }
     box {
      <-LG_BRICK_WIDTH/2+LG_E, 3.5*LG_BRICK_WIDTH, 0>,
      <LG_BRICK_WIDTH/2-LG_E, 2.7*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
    }
    union {
     cylinder {
      <0, 3.5*LG_BRICK_WIDTH, 0.08>,
      <0, 3.5*LG_BRICK_WIDTH, -0.32>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 3.5*LG_BRICK_WIDTH, 0.08>,
      <0, 3.5*LG_BRICK_WIDTH, 0>,
      0.3
     }
     cylinder {
      <0, 3.5*LG_BRICK_WIDTH, 0.08+LG_E>,
      <0, 3.5*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, 3.5*LG_BRICK_WIDTH, -0.24>,
      <0, 3.5*LG_BRICK_WIDTH, -0.32-LG_E>,
      0.3
     }
    }
   }
   #if (MIR=1)
    matrix <1,0,0,0,-1,0,0,0,1,0,0,0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 box {
  <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, 0>
 }
 box {
  <0.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
 }
 box {
  <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, 0>
 }
 box {
  <-0.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare TOOTH = -2.6;
 #while (TOOTH < 2.8)
  merge {
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE,-0.04+LG_CORNER_SPACE, 0.24>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.2>
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE,-0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE,0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE,-0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE,-0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE,-0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    merge {
     merge {
      cylinder {
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -0.32>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -0.32>,
       LG_CORNER_SPACE
      }
      box {
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -0.5>
      }
      rotate <180*atan2(0.08,0.24)/pi, 0, 0>
      translate <0, 0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>
     }
     merge {
      cylinder {
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -0.32>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -0.32>,
       LG_CORNER_SPACE
      }
      box {
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE, 0>,
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -0.5>
      }
      rotate <-180*atan2(0.08,0.24)/pi, 0, 0>
      translate <0, -0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>
     }
    }
    box {
     <LG_BRICK_WIDTH/2, 1.5*LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
     <-LG_BRICK_WIDTH/2, -1.5*LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
    }
   }
   difference {
    merge {
     box {
      <LG_BRICK_WIDTH/2, LG_WALL_WIDTH, 0.24-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_CORNER_SPACE-LG_E>
     }
     box {
      <-LG_BRICK_WIDTH/2, LG_WALL_WIDTH, 0.24-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_CORNER_SPACE-LG_E>
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_E>,
      <-LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -0.5>
      rotate <-180*atan2(0.08,0.24)/pi, 0, 0>
      translate <0, -0.04+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH, LG_E>,
      <-LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -0.5>
      rotate <180*atan2(0.08,0.24)/pi, 0, 0>
      translate <0, 0.04-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE>
     }
    }
   }
   #if (TOOTH < 2.5)
    box {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH/2, 0>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_WALL_WIDTH, -LG_TOP_HEIGHT>
    }
   #end
   translate <0, TOOTH*LG_BRICK_WIDTH, 0>
  }
  #declare TOOTH = TOOTH +0.4;
 #end
} 

#end
