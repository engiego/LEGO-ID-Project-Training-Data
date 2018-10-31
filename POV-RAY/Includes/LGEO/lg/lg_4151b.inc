/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_4151b: Plate 8 x 8 with Grille and Hole                                  */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-06-11 Owen Burgoyne (based on lg_4151.inc)                             */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_4151b)
#else
#declare lg_4151b = 
union {
  #declare ROT = 0;
  #while (ROT < 4)
  union {
    sphere {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
    }
    sphere {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    object {
      lg_knob
      rotate <0, 0, -90*ROT>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
    }
    sphere {
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
    }
    sphere {
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
    }
    cylinder {
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    box {
      <3*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
      <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
    }
    box {
      <3*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    box {
      <4*LG_BRICK_WIDTH-LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
    }
    box {
      <4*LG_BRICK_WIDTH-LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      <4*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    #declare KNOB = -3;
    #while (KNOB < 4)
    object {
      lg_plate_column
      translate <3.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    #declare KNOB = KNOB + 1;
    #end
    difference {
      box {
        <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
        <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT>
      }
      union {
        #declare KNOB = -2.5;
        #while (KNOB < 4)
        object {
          lg_knob_inner_space
          translate <3.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
        }
        #declare KNOB = KNOB + 1;
        #end
      }
    }
    #declare KNOB = -2.5;
    #while (KNOB < 4)
    object {
      lg_knob
      rotate <0, 0, -90*ROT>
      translate <3.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, 0>
    }
    #declare KNOB = KNOB + 1;
    #end
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, -LG_CORNER_SPACE>
  }
  difference {
    union {
      box {
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
      }
      box {
        <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      }
      box {
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      }
    }
    union {
      box {
        <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
      }
      #declare ROT = 0;
      #while (ROT < 4)
      object {
        lg_knob_inner_space
        translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
        rotate <0, 0, ROT*90>
      }
      #declare ROT = ROT +1;
      #end
      cylinder {
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        <0, 0, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, -LG_CORNER_SPACE>,
        <0, 0, +LG_E>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
    }
  }
  object {
    lg_plate_cylinder
    translate <0, 0, -LG_PLATE_HEIGHT>
  }
  intersection {
    difference {
      box {
        <-3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_E>,
        <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>
      }
      box {
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_E>,
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_E>
      }
    }
    union {
      #declare GRID = -2.5;
      #while (GRID < 3)
      #declare ROT = 0;
      #while (ROT < 4)
      union {
        cylinder {
          <LG_BRICK_WIDTH/sqrt(2), LG_GRID_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
          <-(GRID+3)*LG_BRICK_WIDTH*sqrt(2), LG_GRID_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/sqrt(2), LG_GRID_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          <-(GRID+3)*LG_BRICK_WIDTH*sqrt(2), LG_GRID_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/sqrt(2), -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
          <-(GRID+3)*LG_BRICK_WIDTH*sqrt(2), -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/sqrt(2), -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          <-(GRID+3)*LG_BRICK_WIDTH*sqrt(2), -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        box {
          <LG_BRICK_WIDTH/sqrt(2), LG_GRID_WIDTH/2-LG_CORNER_SPACE, 0>,
          <-(GRID+3)*LG_BRICK_WIDTH*sqrt(2), -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
        }
        box {
          <LG_BRICK_WIDTH/sqrt(2), LG_GRID_WIDTH/2, -LG_CORNER_SPACE>,
          <-(GRID+3)*LG_BRICK_WIDTH*sqrt(2), -LG_GRID_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
        }
        rotate <0, 0, 45>
        translate <3*LG_BRICK_WIDTH, GRID*LG_BRICK_WIDTH, 0>
        rotate <0, 0, 90*ROT>
      }
      #declare ROT = ROT + 1;
      #end
      #declare GRID = GRID + 1;
      #end
    }
  }
}

#declare lg_4151b_clear = 
merge {
  #declare ROT = 0;
  #while (ROT < 4)
  merge {
    sphere {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
    }
    sphere {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    object {
      lg_knob_clear
      rotate <0, 0, -90*ROT>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
    }
    sphere {
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
    }
    sphere {
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
    }
    cylinder {
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    box {
      <3*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
      <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
    }
    box {
      <3*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    box {
      <4*LG_BRICK_WIDTH-LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
      <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
    }
    box {
      <4*LG_BRICK_WIDTH-LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      <4*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    #declare KNOB = -3;
    #while (KNOB < 4)
    object {
      lg_plate_column_clear
      translate <3.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    #declare KNOB = KNOB + 1;
    #end
    difference {
      box {
        <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
        <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT>
      }
      merge {
        #declare KNOB = -2.5;
        #while (KNOB < 4)
        object {
          lg_knob_inner_space_clear
          translate <3.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
        }
        #declare KNOB = KNOB + 1;
        #end
      }
    }
    #declare KNOB = -2.5;
    #while (KNOB < 4)
    object {
      lg_knob_clear
      rotate <0, 0, -90*ROT>
      translate <3.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, 0>
    }
    #declare KNOB = KNOB + 1;
    #end
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, -LG_CORNER_SPACE>
  }
  difference {
    merge {
      box {
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
      }
      box {
        <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      }
      box {
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      }
    }
    merge {
      box {
        <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
      }
      #declare ROT = 0;
      #while (ROT < 4)
      object {
        lg_knob_inner_space_clear
        translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
        rotate <0, 0, ROT*90>
      }
      #declare ROT = ROT +1;
      #end
      cylinder {
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        <0, 0, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, -LG_CORNER_SPACE>,
        <0, 0, +LG_E>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
    }
  }
  object {
    lg_plate_cylinder_clear
    translate <0, 0, -LG_PLATE_HEIGHT>
  }
  intersection {
    difference {
      box {
        <-3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_E>,
        <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>
      }
      box {
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_E>,
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_E>
      }
    }
    merge {
      #declare GRID = -2.5;
      #while (GRID < 3)
      #declare ROT = 0;
      #while (ROT < 4)
      merge {
        cylinder {
          <LG_BRICK_WIDTH/sqrt(2), LG_GRID_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
          <-(GRID+3)*LG_BRICK_WIDTH*sqrt(2), LG_GRID_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/sqrt(2), LG_GRID_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          <-(GRID+3)*LG_BRICK_WIDTH*sqrt(2), LG_GRID_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/sqrt(2), -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
          <-(GRID+3)*LG_BRICK_WIDTH*sqrt(2), -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/sqrt(2), -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          <-(GRID+3)*LG_BRICK_WIDTH*sqrt(2), -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        box {
          <LG_BRICK_WIDTH/sqrt(2), LG_GRID_WIDTH/2-LG_CORNER_SPACE, 0>,
          <-(GRID+3)*LG_BRICK_WIDTH*sqrt(2), -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
        }
        box {
          <LG_BRICK_WIDTH/sqrt(2), LG_GRID_WIDTH/2, -LG_CORNER_SPACE>,
          <-(GRID+3)*LG_BRICK_WIDTH*sqrt(2), -LG_GRID_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
        }
        rotate <0, 0, 45>
        translate <3*LG_BRICK_WIDTH, GRID*LG_BRICK_WIDTH, 0>
        rotate <0, 0, 90*ROT>
      }
      #declare ROT = ROT + 1;
      #end
      #declare GRID = GRID + 1;
      #end
    }
  }
}

#end