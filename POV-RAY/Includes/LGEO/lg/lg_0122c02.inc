/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_0122c02: Plate 2 x 2 with White Wheels                                   */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2007-10-21 Lutz Uhlmann                                                     */
/* 2008-030-9 Lutz Uhlmann fixed material statement                            */
/* 2013-01-29 Owen Burgoyne fixed solid wheel colour and added LEGO logo       */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_0122c02)
#else
  #ifdef(lg_0422)
  #else
    #include "lg_0422.inc"
  #end 
#declare lg_0122c02 = 
union {
  object {
    lg_0422
  }
  cylinder {
    <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
    <0, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
    0.08
    material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
  }
  #declare ROT = 0;
  #while ( ROT < 2 )
  union {
    cylinder {
      <0, -0.2, 0>,
      <0, -0.16, 0>,
      0.4-LG_CORNER_SPACE
    }
    cylinder {
      <0, -0.2+LG_CORNER_SPACE, 0>,
      <0, -0.16, 0>,
      0.4
    }
    cylinder {
      <0, 0.2, 0>,
      <0, 0.16, 0>,
      0.4-LG_CORNER_SPACE
    }
    cylinder {
      <0, 0.2-LG_CORNER_SPACE, 0>,
      <0, 0.16, 0>,
      0.4
    }
    cone {
      <0, -0.16, 0>, 0.4,
      <0, -0.048, 0>, 0.26
    }
    cone {
      <0, 0.16, 0>, 0.4,
      <0, 0.048, 0>, 0.26
    }
    cylinder {
      <0, 0.08, 0>,
      <0, -0.08, 0>,
      0.26
    }
    difference {
      union {
        torus {
          0.4-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          translate <0, 0.2-LG_CORNER_SPACE, 0>
        }
        torus {
          0.4-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          translate <0, -0.2+LG_CORNER_SPACE, 0>
        }
      }
      cylinder {
        <0, 0.2-LG_CORNER_SPACE-LG_E, 0>,
        <0, -0.2+LG_CORNER_SPACE+LG_E, 0>,
        0.4+LG_E
      }
    }
    cylinder {
      <0, 0.32, 0>,
      <0, 0, 0>,
      LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
    }
    cylinder {
      <0, 0.32-LG_KNOB_CORNER_SPACE, 0>,
      <0, 0, 0>,
      LG_KNOB_RADIUS
    }
    torus {
      LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
      LG_KNOB_CORNER_SPACE
      translate <0, 0.32-LG_KNOB_CORNER_SPACE, 0>
    }
    cone {
      <0, -0.2, 0>, 0.4-LG_CORNER_SPACE,
      <0, -0.3, 0>, 0.25
    }
    #if (lg_quality > 2)
    object {
      lego_logo_text
      rotate <90, 0, 0>
      scale <-1, 1, 1>
      translate <0, 0.32, 0>
    }
    #end
    translate <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
    #if (ROT = 1)
      rotate <0, 0, 180>
    #end
  }
  #declare ROT = ROT + 1;
  #end
}

#declare lg_0122c02_clear = 
union {
  object {
    lg_0422_clear
  }
  cylinder {
    <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
    <0, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
    0.08
    material { texture { lg_chrome normal { bumps 0.1 scale 2 } } }
  }
  #declare ROT = 0;
  #while ( ROT < 2 )
  merge {
    cylinder {
      <0, -0.2, 0>,
      <0, -0.16, 0>,
      0.4-LG_CORNER_SPACE
    }
    cylinder {
      <0, -0.2+LG_CORNER_SPACE, 0>,
      <0, -0.16, 0>,
      0.4
    }
    cylinder {
      <0, 0.2, 0>,
      <0, 0.16, 0>,
      0.4-LG_CORNER_SPACE
    }
    cylinder {
      <0, 0.2-LG_CORNER_SPACE, 0>,
      <0, 0.16, 0>,
      0.4
    }
    cone {
      <0, -0.16, 0>, 0.4,
      <0, -0.048, 0>, 0.26
    }
    cone {
      <0, 0.16, 0>, 0.4,
      <0, 0.048, 0>, 0.26
    }
    cylinder {
      <0, 0.08, 0>,
      <0, -0.08, 0>,
      0.26
    }
    difference {
      union {
        torus {
          0.4-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          translate <0, 0.2-LG_CORNER_SPACE, 0>
        }
        torus {
          0.4-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          translate <0, -0.2+LG_CORNER_SPACE, 0>
        }
      }
      cylinder {
        <0, 0.2-LG_CORNER_SPACE-LG_E, 0>,
        <0, -0.2+LG_CORNER_SPACE+LG_E, 0>,
        0.4+LG_E
      }
    }
    cylinder {
      <0, 0.32, 0>,
      <0, 0, 0>,
      LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
    }
    cylinder {
      <0, 0.32-LG_KNOB_CORNER_SPACE, 0>,
      <0, 0, 0>,
      LG_KNOB_RADIUS
    }
    torus {
      LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
      LG_KNOB_CORNER_SPACE
      translate <0, 0.32-LG_KNOB_CORNER_SPACE, 0>
    }
    cone {
      <0, -0.2, 0>, 0.4-LG_CORNER_SPACE,
      <0, -0.3, 0>, 0.25
    }
    #if (lg_quality > 2)
    object {
      lego_logo_text_clear
      rotate <90, 0, 0>
      scale <-1, 1, 1>
      translate <0, 0.32, 0>
    }
    #end
    translate <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>
    material { texture { lg_white normal { bumps 0.1 scale 2 } } }
    #if (ROT = 1)
      rotate <0, 0, 180>
    #end
  }
  #declare ROT = ROT + 1;
  #end
}

#end
