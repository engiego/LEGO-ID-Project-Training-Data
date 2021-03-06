/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_3614: Plate 1 x 1 Round with Towball                                     */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-07-27 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_3614)
#else
#declare lg_3614 = 
union {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        LG_BRICK_WIDTH/2
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_KNOB_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_KNOB_HEIGHT-LG_E>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_KNOB_INNER_RADIUS
    }
  }
  cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT/2>,
    <LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT/2>,
    LG_PLATE_HEIGHT/2
  }
  sphere {
    <LG_BRICK_WIDTH/2+LG_PLATE_HEIGHT, 0, LG_PLATE_HEIGHT/2>,
    LG_PLATE_HEIGHT
  }
  object {
    lg_tech_knob
    translate <0, 0, LG_PLATE_HEIGHT>
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_3614_clear = 
merge {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        LG_BRICK_WIDTH/2
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_KNOB_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_KNOB_HEIGHT-LG_E>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_KNOB_INNER_RADIUS
    }
  }
  cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT/2>,
    <LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT/2>,
    LG_PLATE_HEIGHT/2
  }
  sphere {
    <LG_BRICK_WIDTH/2+LG_PLATE_HEIGHT, 0, LG_PLATE_HEIGHT/2>,
    LG_PLATE_HEIGHT
  }
  object {
    lg_tech_knob_clear
    translate <0, 0, LG_PLATE_HEIGHT>
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
