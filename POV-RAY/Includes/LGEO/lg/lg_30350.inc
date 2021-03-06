/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_30350: Tile 3 x 2 with 2 Clips                                           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2008-02-10 Lutz Uhlmann                                                     */
/* 2014-02-10 Owen Burgoyne fixed clear version (was showing lg_60470) and     */
/*            underside plate cylinders                                        */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_30350)
#else
#declare lg_angle = acos((0.13+LG_CORNER_SPACE)/(0.16+LG_CORNER_SPACE));
#declare lg_30350 = 
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  union {
   #declare MIR2 = 0;
   #while (MIR2 < 2)
    union {
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     #if (MIR2 = 1)
      scale <1, -1, 1>
     #end
    }
    #declare MIR2 = MIR2 + 1;
   #end
   cylinder {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E>
   }
   box {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+0.13>
   }
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE-LG_E>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-0.13>
   }
   intersection {
    union {
     torus {
      0.32-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
     }
     torus {
      0.32-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
     }
     difference {
      union {
       cylinder {
        <LG_BRICK_WIDTH, LG_WALL_WIDTH, 0>,
        <LG_BRICK_WIDTH, -LG_WALL_WIDTH, 0>,
        0.32-LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
        <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
        0.32
       }
      }
      union {
       cylinder {
        <LG_BRICK_WIDTH, LG_WALL_WIDTH, 0>,
        <LG_BRICK_WIDTH, -LG_WALL_WIDTH, 0>,
        LG_KNOB_INNER_RADIUS
       }
       cylinder {
        <LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>,
        <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>,
        <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
      }
     }
    }
    box {
     <LG_BRICK_WIDTH, 0.2, 0.4>,
     <LG_BRICK_WIDTH/2, -0.2, -0.4>
    }
    translate <0, 0, -0.08>
   }
   intersection {
    union {
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
     }
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, -LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
     }
    }
    union {
     box {
      <0, 0.2, 0.2>,
      <-0.4, -0.2, -0.2>
      rotate <0, lg_angle*180/pi, 0>
     }
     box {
      <0, 0.2, 0.2>,
      <-0.2, -0.2, -0.2>
      rotate <0, -lg_angle*180/pi, 0>
     }
    }
    translate <LG_BRICK_WIDTH, 0, -0.08>
   }
   difference {
    box {
     <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH, -LG_WALL_WIDTH, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH, -0.08>,
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH, -0.08>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08>,
      <LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, -0.08>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08>,
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E, -0.08>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     difference {
      box {
       <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH+LG_E, -0.08+0.13+LG_CORNER_SPACE>,
       <LG_BRICK_WIDTH-LG_E, -LG_WALL_WIDTH-LG_E, -0.08-0.13-LG_CORNER_SPACE>
      }
      union {
       box {
        <0, 0.2, 0.2>,
        <-0.4, -0.2, -0.2>
        rotate <0, -lg_angle*180/pi, 0>
        translate <LG_BRICK_WIDTH, 0, -0.08>
       }
       box {
        <0, 0.2, 0.2>,
        <-0.4, -0.2, -0.2>
        rotate <0, -lg_angle*180/pi, 0>
        translate <LG_BRICK_WIDTH, 0, -0.08>
       }
      }
     }
    }
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   translate <LG_BRICK_WIDTH, (1-2*MIR)*0.5*LG_BRICK_WIDTH, 0>
   scale <-1, 1, 1>
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.06+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.06+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.06+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <-1.7*LG_BRICK_WIDTH, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.06, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06, -LG_CORNER_SPACE>
 }
 box {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.06+LG_CORNER_SPACE, -LG_TOP_HEIGHT>,
  <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, 0>
 }
 difference {
  union {
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
  }
 }
 object {
  lg_plate_cylinder
  translate <-LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
}

#declare lg_30350_clear = 
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  merge {
   #declare MIR2 = 0;
   #while (MIR2 < 2)
    merge {
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     #if (MIR2 = 1)
      scale <1, -1, 1>
     #end
    }
    #declare MIR2 = MIR2 + 1;
   #end
   cylinder {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E>
   }
   box {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+0.13>
   }
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE-LG_E>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-0.13>
   }
   intersection {
    merge {
     torus {
      0.32-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
     }
     torus {
      0.32-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
     }
     difference {
      merge {
       cylinder {
        <LG_BRICK_WIDTH, LG_WALL_WIDTH, 0>,
        <LG_BRICK_WIDTH, -LG_WALL_WIDTH, 0>,
        0.32-LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
        <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
        0.32
       }
      }
      merge {
       cylinder {
        <LG_BRICK_WIDTH, LG_WALL_WIDTH, 0>,
        <LG_BRICK_WIDTH, -LG_WALL_WIDTH, 0>,
        LG_KNOB_INNER_RADIUS
       }
       cylinder {
        <LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>,
        <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>,
        <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
      }
     }
    }
    box {
     <LG_BRICK_WIDTH, 0.2, 0.4>,
     <LG_BRICK_WIDTH/2, -0.2, -0.4>
    }
    translate <0, 0, -0.08>
   }
   intersection {
    merge {
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
     }
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, -LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
     }
    }
    merge {
     box {
      <0, 0.2, 0.2>,
      <-0.4, -0.2, -0.2>
      rotate <0, lg_angle*180/pi, 0>
     }
     box {
      <0, 0.2, 0.2>,
      <-0.2, -0.2, -0.2>
      rotate <0, -lg_angle*180/pi, 0>
     }
    }
    translate <LG_BRICK_WIDTH, 0, -0.08>
   }
   difference {
    box {
     <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH, -LG_WALL_WIDTH, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>
    }
    merge {
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH, -0.08>,
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH, -0.08>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08>,
      <LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, -0.08>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08>,
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E, -0.08>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     difference {
      box {
       <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH+LG_E, -0.08+0.13+LG_CORNER_SPACE>,
       <LG_BRICK_WIDTH-LG_E, -LG_WALL_WIDTH-LG_E, -0.08-0.13-LG_CORNER_SPACE>
      }
      merge {
       box {
        <0, 0.2, 0.2>,
        <-0.4, -0.2, -0.2>
        rotate <0, -lg_angle*180/pi, 0>
        translate <LG_BRICK_WIDTH, 0, -0.08>
       }
       box {
        <0, 0.2, 0.2>,
        <-0.4, -0.2, -0.2>
        rotate <0, -lg_angle*180/pi, 0>
        translate <LG_BRICK_WIDTH, 0, -0.08>
       }
      }
     }
    }
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   translate <LG_BRICK_WIDTH, (1-2*MIR)*0.5*LG_BRICK_WIDTH, 0>
   scale <-1, 1, 1>
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.06+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.06+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.06+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <-1.7*LG_BRICK_WIDTH, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.06, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06, -LG_CORNER_SPACE>
 }
 box {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.06+LG_CORNER_SPACE, -LG_TOP_HEIGHT>,
  <-1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06-LG_CORNER_SPACE, 0>
 }
 difference {
  merge {
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  merge {
   box {
    <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
  }
 }
 object {
  lg_plate_cylinder_clear
  translate <-LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
}

#end
