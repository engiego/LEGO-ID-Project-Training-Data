/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_11477: Slope Brick Curved 2 x 1                                          */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-07-27 Owen Burgoyne                                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_11477)
#else
#declare LENGTH = 1;
#declare WIDTH = 2;
#declare LG_ANGLE = 32.65;
#declare LG_CURVE_RADIUS = 2.9517;
#declare LG_E = 0.0001;
#declare lg_11477 = 
union {
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_HEIGHT>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_HEIGHT>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_HEIGHT>,
    LG_CORNER_SPACE
  }
  union {
    torus {
      LG_CURVE_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>
    }
    torus {
      LG_CURVE_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>
    }
    clipped_by {
      plane { -x, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE }
    }
    clipped_by {
      plane { x, 0 }
      rotate <0, LG_ANGLE, 0>
      translate <WIDTH/2*-LG_BRICK_WIDTH, 0, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>
    }
  }
  difference {
    union {
      box {
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        <0, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      box {
        <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      box {
        <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT>,
        <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT>
      }
      box {
        <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <WIDTH/2*LG_BRICK_WIDTH, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      box {
        <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH, LG_CORNER_SPACE>,
        <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      box {
        <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
        <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT>
      }
    }
    difference {
      cylinder {
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*LG_BRICK_WIDTH+LG_E, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>,
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*-LG_BRICK_WIDTH-LG_E, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>,
        LG_CURVE_RADIUS-LG_CORNER_SPACE
        inverse
      }
      box {
        <WIDTH/2*-LG_BRICK_WIDTH-LG_E, LENGTH/2*LG_BRICK_WIDTH+LG_E, 0>,
        <WIDTH/2*LG_BRICK_WIDTH+LG_E, LENGTH/2*-LG_BRICK_WIDTH-LG_E, LG_KNOB_HEIGHT>
      }
    }
    box {
      <WIDTH/2*-LG_BRICK_WIDTH+LG_WALL_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_PLATE_HEIGHT-LG_E>,
      <0, LENGTH/2*-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_HEIGHT>
    }
    box {
      <LG_WALL_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_E>,
      <WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LENGTH/2*-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_HEIGHT>
    }
  }
  intersection {
    difference {
      cylinder {
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>,
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>,
        LG_CURVE_RADIUS
      }
      cylinder {
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>,
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*-LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>,
        LG_CURVE_RADIUS-LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT
      }
      cylinder {
        <0.5*-LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT>,
        <0.5*-LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>,
        LG_KNOB_RADIUS
      }
      box {
        <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
        <0.5*-LG_BRICK_WIDTH+LG_KNOB_RADIUS, LENGTH/2*-LG_BRICK_WIDTH, LG_PLATE_HEIGHT+(LG_KNOB_HEIGHT/1.26)>
      }
    }
    box {
      <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <WIDTH/2*LG_BRICK_WIDTH, LENGTH/2*-LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT>
      clipped_by {
        plane { x, 0 }
        rotate <0, LG_ANGLE, 0>
        translate <WIDTH/2*-LG_BRICK_WIDTH, 0, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>
      }
    }
  }
  box {
    <LG_CORNER_SPACE, LG_CYLINDER_WALL_WIDTH/1.5, LG_PLATE_HEIGHT>,
    <0.5*-LG_BRICK_WIDTH+LG_KNOB_RADIUS, -LG_CYLINDER_WALL_WIDTH/1.5, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>
  }
}

#declare lg_11477_clear = 
merge {
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_HEIGHT>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_HEIGHT>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_HEIGHT>,
    LG_CORNER_SPACE
  }
  merge {
    torus {
      LG_CURVE_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>
    }
    torus {
      LG_CURVE_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>
    }
    clipped_by {
      plane { -x, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE }
    }
    clipped_by {
      plane { x, 0 }
      rotate <0, LG_ANGLE, 0>
      translate <WIDTH/2*-LG_BRICK_WIDTH, 0, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>
    }
  }
  difference {
    merge {
      box {
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        <0, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      box {
        <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      box {
        <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT>,
        <LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT>
      }
      box {
        <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <WIDTH/2*LG_BRICK_WIDTH, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      box {
        <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH, LG_CORNER_SPACE>,
        <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      box {
        <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
        <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT>
      }
    }
    difference {
      cylinder {
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*LG_BRICK_WIDTH+LG_E, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>,
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*-LG_BRICK_WIDTH-LG_E, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>,
        LG_CURVE_RADIUS-LG_CORNER_SPACE
        inverse
      }
      box {
        <WIDTH/2*-LG_BRICK_WIDTH-LG_E, LENGTH/2*LG_BRICK_WIDTH+LG_E, 0>,
        <WIDTH/2*LG_BRICK_WIDTH+LG_E, LENGTH/2*-LG_BRICK_WIDTH-LG_E, LG_KNOB_HEIGHT>
      }
    }
    box {
      <WIDTH/2*-LG_BRICK_WIDTH+LG_WALL_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_PLATE_HEIGHT-LG_E>,
      <0, LENGTH/2*-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_HEIGHT>
    }
    box {
      <LG_WALL_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_E>,
      <WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LENGTH/2*-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_HEIGHT>
    }
  }
  intersection {
    difference {
      cylinder {
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>,
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>,
        LG_CURVE_RADIUS
      }
      cylinder {
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>,
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*-LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>,
        LG_CURVE_RADIUS-LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT
      }
      cylinder {
        <0.5*-LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT>,
        <0.5*-LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>,
        LG_KNOB_RADIUS
      }
      box {
        <LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
        <0.5*-LG_BRICK_WIDTH+LG_KNOB_RADIUS, LENGTH/2*-LG_BRICK_WIDTH, LG_PLATE_HEIGHT+(LG_KNOB_HEIGHT/1.26)>
      }
    }
    box {
      <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <WIDTH/2*LG_BRICK_WIDTH, LENGTH/2*-LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT>
      clipped_by {
        plane { x, 0 }
        rotate <0, LG_ANGLE, 0>
        translate <WIDTH/2*-LG_BRICK_WIDTH, 0, 2*LG_PLATE_HEIGHT-LG_CURVE_RADIUS>
      }
    }
  }
  box {
    <LG_CORNER_SPACE, LG_CYLINDER_WALL_WIDTH/1.5, LG_PLATE_HEIGHT>,
    <0.5*-LG_BRICK_WIDTH+LG_KNOB_RADIUS, -LG_CYLINDER_WALL_WIDTH/1.5, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>
  }
}

#end
