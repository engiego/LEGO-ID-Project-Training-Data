/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990824 Lutz Uhlmann                                                       */
/* 20080127 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30077: Fence 1 x 6 x 2                                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30077)
#else
#declare lg_radius = (4*LG_BRICK_WIDTH-2*LG_WALL_WIDTH)/3/2;
#declare lg_30077 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0.06, 2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.06, 2.2*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_E>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>
   }
   box {
    <-LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>
   }
   difference {
    box {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    }
    object {
     lg_knob_inner_space
     translate <0, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_plate_column
    translate <0, LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   union {
    cylinder {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CORNER_SPACE, -lg_radius-LG_WALL_WIDTH>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -lg_radius-LG_WALL_WIDTH>,
     LG_CORNER_SPACE
    }
    cylinder {
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CORNER_SPACE, -lg_radius-LG_WALL_WIDTH>,
     LG_CORNER_SPACE
    }
    cylinder {
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -lg_radius-LG_WALL_WIDTH>,
     LG_CORNER_SPACE
    }
    box {
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH, -lg_radius-LG_WALL_WIDTH>
    }
    box {
     <-LG_BRICK_WIDTH/2, LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH/2, LG_WALL_WIDTH-LG_CORNER_SPACE, -lg_radius-LG_WALL_WIDTH>
    }
    translate <0, lg_radius, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 object {
  lg_plate_column
  translate <0, 0, -2*LG_BRICK_HEIGHT>
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2.2*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2.2*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 #declare BOW = -1;
 #while (BOW <2)
  difference {
   union {
    torus {
     lg_radius+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
    }
    torus {
     lg_radius+LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
    }
    torus {
     lg_radius+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
    }
    torus {
     lg_radius+LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
    }
    difference {
     union {
      cylinder {
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
       lg_radius+LG_WALL_WIDTH
      }
      cylinder {
       <LG_BRICK_WIDTH/2, 0, 0>,
       <-LG_BRICK_WIDTH/2, 0, 0>,
       lg_radius+LG_WALL_WIDTH-LG_CORNER_SPACE
      }
     }
     union {
      cylinder {
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
       <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
       lg_radius+LG_CORNER_SPACE
      }
      cylinder {
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
       <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
       lg_radius+LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH/2, 0, 0>,
       <-LG_BRICK_WIDTH/2, 0, 0>,
       lg_radius
      }
     }
    }
   }
   box {
    <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH, 0>,
    <-LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
   }
   translate <0, 2*BOW*lg_radius+BOW*LG_WALL_WIDTH, -lg_radius-LG_WALL_WIDTH>
  }
  #declare BOW = BOW + 1;
 #end
}

#declare lg_30077_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0.06, 2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.06, 2.2*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_E>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>
   }
   box {
    <-LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>
   }
   difference {
    box {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    }
    object {
     lg_knob_inner_space_clear
     translate <0, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_plate_column_clear
    translate <0, LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   merge {
    cylinder {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CORNER_SPACE, -lg_radius-LG_WALL_WIDTH>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -lg_radius-LG_WALL_WIDTH>,
     LG_CORNER_SPACE
    }
    cylinder {
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CORNER_SPACE, -lg_radius-LG_WALL_WIDTH>,
     LG_CORNER_SPACE
    }
    cylinder {
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -lg_radius-LG_WALL_WIDTH>,
     LG_CORNER_SPACE
    }
    box {
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH, -lg_radius-LG_WALL_WIDTH>
    }
    box {
     <-LG_BRICK_WIDTH/2, LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH/2, LG_WALL_WIDTH-LG_CORNER_SPACE, -lg_radius-LG_WALL_WIDTH>
    }
    translate <0, lg_radius, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 object {
  lg_plate_column_clear
  translate <0, 0, -2*LG_BRICK_HEIGHT>
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2.2*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2.2*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 #declare BOW = -1;
 #while (BOW <2)
  difference {
   merge {
    torus {
     lg_radius+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
    }
    torus {
     lg_radius+LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
    }
    torus {
     lg_radius+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
    }
    torus {
     lg_radius+LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
    }
    difference {
     merge {
      cylinder {
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
       lg_radius+LG_WALL_WIDTH
      }
      cylinder {
       <LG_BRICK_WIDTH/2, 0, 0>,
       <-LG_BRICK_WIDTH/2, 0, 0>,
       lg_radius+LG_WALL_WIDTH-LG_CORNER_SPACE
      }
     }
     union {
      cylinder {
       <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
       <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
       lg_radius+LG_CORNER_SPACE
      }
      cylinder {
       <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
       <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
       lg_radius+LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH/2, 0, 0>,
       <-LG_BRICK_WIDTH/2, 0, 0>,
       lg_radius
      }
     }
    }
   }
   box {
    <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH, 0>,
    <-LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
   }
   translate <0, 2*BOW*lg_radius+BOW*LG_WALL_WIDTH, -lg_radius-LG_WALL_WIDTH>
  }
  #declare BOW = BOW + 1;
 #end
}

#end
