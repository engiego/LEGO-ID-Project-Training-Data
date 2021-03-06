/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980315 Lutz Uhlmann                                                       */
/* 20071027 Lutz Uhlmann fixed stud orientation                                */
/* 20180209 Jasmin added bottom tube			                               */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30237: Plate 1 x 1 with Clip Vertical                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30237)
#else
#declare lg_angle = acos((0.13+LG_CORNER_SPACE)/(0.16+LG_CORNER_SPACE));
#declare lg_30237 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH, 2*LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), 0.13+LG_CORNER_SPACE+LG_E, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13, -LG_PLATE_HEIGHT>,
     <LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>,
      <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT-LG_E>,
      <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_E>,
      <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     difference {
      box {
       <LG_BRICK_WIDTH+LG_WALL_WIDTH, 0, -LG_PLATE_HEIGHT+LG_E>,
       <LG_BRICK_WIDTH-LG_E, 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_E>
      }
      box {
       <0, 0.4, -LG_PLATE_HEIGHT+LG_E>,
       <-0.4, -0.4, -2*LG_PLATE_HEIGHT-LG_E>
       rotate <0, 0, -lg_angle*180/pi>
       translate <LG_BRICK_WIDTH, 0, 0>
      }
     }
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space
    translate <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_brick_column
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 difference {
  union {
   intersection {
    union {
     torus {
      0.32-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
     torus {
      0.32-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      union {
       cylinder {
        <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>,
        <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT>,
        0.32-LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        0.32
       }
      }
      union {
       cylinder {
        <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>,
        <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT>,
        LG_KNOB_INNER_RADIUS
       }
       cylinder {
        <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT-LG_E>,
        <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_E>,
        <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
      }
     }
    }
    box {
     <LG_BRICK_WIDTH, 0.4, -LG_PLATE_HEIGHT+LG_E>,
     <LG_BRICK_WIDTH/2, -0.4, -2*LG_PLATE_HEIGHT-LG_E>
    }
   }
   intersection {
    torus {
     LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    union {
     box {
      <0, 0.4, LG_CORNER_SPACE+LG_E>,
      <-0.4, -0.4, -LG_CORNER_SPACE-LG_E>
      rotate <0, 0, lg_angle*180/pi>
     }
     box {
      <0, 0.4, LG_CORNER_SPACE+LG_E>,
      <-0.4, -0.4, -LG_CORNER_SPACE-LG_E>
      rotate <0, 0, -lg_angle*180/pi>
     }
    }
    translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   intersection {
    torus {
     LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    union {
     box {
      <0, 0.4, LG_CORNER_SPACE+LG_E>,
      <-0.4, -0.4, -LG_CORNER_SPACE-LG_E>
      rotate <0, 0, lg_angle*180/pi>
     }
     box {
      <0, 0.4, LG_CORNER_SPACE+LG_E>,
      <-0.4, -0.4, -LG_CORNER_SPACE-LG_E>
      rotate <0, 0, -lg_angle*180/pi>
     }
    }
    translate <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -0.2+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.2, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -0.2, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  box {
   <LG_BRICK_WIDTH, 0.04, -LG_PLATE_HEIGHT+LG_E>,
   <LG_BRICK_WIDTH/2-LG_E, -0.04, -2*LG_PLATE_HEIGHT-LG_E>
  }
 }
}

#declare lg_30237_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, 0.13+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH, 2*LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), 0.13+LG_CORNER_SPACE+LG_E, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.13, -LG_PLATE_HEIGHT>,
     <LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>,
      <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT-LG_E>,
      <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_E>,
      <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     difference {
      box {
       <LG_BRICK_WIDTH+LG_WALL_WIDTH, 0, -LG_PLATE_HEIGHT+LG_E>,
       <LG_BRICK_WIDTH-LG_E, 0.13+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_E>
      }
      box {
       <0, 0.4, -LG_PLATE_HEIGHT+LG_E>,
       <-0.4, -0.4, -2*LG_PLATE_HEIGHT-LG_E>
       rotate <0, 0, -lg_angle*180/pi>
       translate <LG_BRICK_WIDTH, 0, 0>
      }
     }
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  merge {
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space
    translate <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_brick_column
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 difference {
  merge {
   intersection {
    merge {
     torus {
      0.32-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
     torus {
      0.32-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      union {
       cylinder {
        <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>,
        <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT>,
        0.32-LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        0.32
       }
      }
      union {
       cylinder {
        <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>,
        <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT>,
        LG_KNOB_INNER_RADIUS
       }
       cylinder {
        <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT-LG_E>,
        <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_E>,
        <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
      }
     }
    }
    box {
     <LG_BRICK_WIDTH, 0.4, -LG_PLATE_HEIGHT+LG_E>,
     <LG_BRICK_WIDTH/2, -0.4, -2*LG_PLATE_HEIGHT-LG_E>
    }
   }
   intersection {
    torus {
     LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    union {
     box {
      <0, 0.4, LG_CORNER_SPACE+LG_E>,
      <-0.4, -0.4, -LG_CORNER_SPACE-LG_E>
      rotate <0, 0, lg_angle*180/pi>
     }
     box {
      <0, 0.4, LG_CORNER_SPACE+LG_E>,
      <-0.4, -0.4, -LG_CORNER_SPACE-LG_E>
      rotate <0, 0, -lg_angle*180/pi>
     }
    }
    translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   intersection {
    torus {
     LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    union {
     box {
      <0, 0.4, LG_CORNER_SPACE+LG_E>,
      <-0.4, -0.4, -LG_CORNER_SPACE-LG_E>
      rotate <0, 0, lg_angle*180/pi>
     }
     box {
      <0, 0.4, LG_CORNER_SPACE+LG_E>,
      <-0.4, -0.4, -LG_CORNER_SPACE-LG_E>
      rotate <0, 0, -lg_angle*180/pi>
     }
    }
    translate <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -0.2+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.2, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -0.2, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  box {
   <LG_BRICK_WIDTH, 0.04, -LG_PLATE_HEIGHT+LG_E>,
   <LG_BRICK_WIDTH/2-LG_E, -0.04, -2*LG_PLATE_HEIGHT-LG_E>
  }
 }
}

#end
