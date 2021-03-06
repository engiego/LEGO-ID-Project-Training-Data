/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_2793: ~Technic Pneumatic Cylinder 2 x 2 x 5 with 2 Ports                 */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_2793)
#else
#include "lg_macro.inc"
#local LG_HEIGHT_BASE = 1.12;
#local LG_HEIGHT_BASE_INNER = 1;
#local LG_RADIUS_CYLINDER_OUTER = 0.76;
#local LG_RADIUS_CYLINDER_MID = 0.68;
#local LG_RADIUS_CYLINDER_INNER = 0.60;
#local LG_HEIGHT_LOWER_NOZZLE = 0.56;
#local LG_HEIGHT_UPPER_NOZZLE = 4.40;
#local LG_RADIUS_NOZZLE_HOLE = 0.08;
#local LG_HEIGHT_SIDE_SNAP = 4.44;
#local LG_RADIUS_SIDE_SNAP = 0.20;
#local WIDTH = 2;
#local LENGTH = 2;
#declare lg_2793 =
union {
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
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
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  // CYLINDER BASE
  difference {
    union {
      box {
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <WIDTH/2*LG_BRICK_WIDTH, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>
      }
      box {
        <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH, LG_CORNER_SPACE>,
        <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH, LG_HEIGHT_BASE-LG_CORNER_SPACE>
      }
      box {
        <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
        <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE>
      }
    }
    difference {
      box {
        <WIDTH/2*-LG_BRICK_WIDTH+LG_WALL_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_E>,
        <WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LENGTH/2*-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_HEIGHT_BASE_INNER>
      }
      difference {
        union {
          cylinder {
            <0, LENGTH/2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>,
            <0, LENGTH/2*-LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>
            LG_BEAM_WIDTH/2
          }
          box {
            <-LG_BEAM_WIDTH/2, LENGTH/2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>,
            <LG_BEAM_WIDTH/2, LENGTH/2*-LG_BRICK_WIDTH, LG_HEIGHT_BASE_INNER+LG_E>
          }
          cylinder {
            <0, 0, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>,
            <WIDTH/2*LG_BRICK_WIDTH, 0, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>,
            LG_TECH_HOLE_RADIUS
          }
          box {
            <0, LG_TECH_HOLE_RADIUS, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>,
            <WIDTH/2*LG_BRICK_WIDTH, -LG_TECH_HOLE_RADIUS, LG_HEIGHT_BASE_INNER+LG_E>
          }
          object {
            lg_brick_cylinder
          }
        }
        cylinder {
          <0, 0.08, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>,
          <0, -0.08, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>,
          0.24
        }
        box {
          <-0.24, 0.08, -LG_E>,
          <0.24, -0.08, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>
        }
      }
    }
    cylinder {
      <0.5*LG_BRICK_WIDTH, 0, LG_HEIGHT_LOWER_NOZZLE>,
      <0.5*LG_BRICK_WIDTH, 0, LG_HEIGHT_BASE+LG_E>,
      LG_RADIUS_NOZZLE_HOLE
    }
    sphere {
      <0.5*LG_BRICK_WIDTH, 0, LG_HEIGHT_LOWER_NOZZLE>,
      LG_RADIUS_NOZZLE_HOLE
    }
    cylinder {
      <0.5*LG_BRICK_WIDTH, 0, LG_HEIGHT_LOWER_NOZZLE>,
      <WIDTH/2*LG_BRICK_WIDTH+LG_E, 0, LG_HEIGHT_LOWER_NOZZLE>,
      LG_RADIUS_NOZZLE_HOLE
    }
    object {
      lg_tech_hole_group (2, 1)
      rotate <0, 0, 90>
      translate <0, 0, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>
    }
  }
  box {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, LG_WALL_WIDTH/4, 0>,
    <-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -LG_WALL_WIDTH/4, LG_HEIGHT_BASE_INNER+LG_E>
  }
  box {
    <LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_WALL_WIDTH/4, 0>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -LG_WALL_WIDTH/4, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>
  }
  // LOWER NOZZLE
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <WIDTH/2*LG_BRICK_WIDTH+0.6-LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>
  }
  torus {
    0.12,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>
  }
  torus {
    LG_RADIUS_NOZZLE_HOLE+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>
  }
  difference {
    union {
      cylinder {
        <WIDTH/2*LG_BRICK_WIDTH-LG_E, 0, LG_HEIGHT_LOWER_NOZZLE>,
        <WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <WIDTH/2*LG_BRICK_WIDTH, 0, LG_HEIGHT_LOWER_NOZZLE>,
        <WIDTH/2*LG_BRICK_WIDTH+0.6-LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>,
        LG_KNOB_INNER_RADIUS
      }
      lg_connect_tori_union (
        <WIDTH/2*LG_BRICK_WIDTH+0.6-LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>,
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
        <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>,
        0.12
      )
    }
    torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>
    }
    cylinder {
      <0, 0, LG_HEIGHT_LOWER_NOZZLE>,
      <WIDTH/2*LG_BRICK_WIDTH+0.64, 0, LG_HEIGHT_LOWER_NOZZLE>,
      LG_RADIUS_NOZZLE_HOLE
    }
    cylinder {
      <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>,
      <WIDTH/2*LG_BRICK_WIDTH+0.64+LG_E, 0, LG_HEIGHT_LOWER_NOZZLE>,
      LG_RADIUS_NOZZLE_HOLE+LG_CORNER_SPACE
    }
  }
  // MAIN CYLINDER
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 5*LG_BRICK_HEIGHT-0.08-LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_MID-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 5*LG_BRICK_HEIGHT-0.08-LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, LG_HEIGHT_BASE-LG_E>,
        <0, 0, LG_HEIGHT_BASE+LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_OUTER+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_BASE>,
        <0, 0, 4*LG_BRICK_HEIGHT>,
        LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_BASE+LG_CORNER_SPACE>,
        <0, 0, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_OUTER
      }
      cylinder {
        <0, 0, 4*LG_BRICK_HEIGHT-LG_E>,
        <0, 0, 4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_MID+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 4*LG_BRICK_HEIGHT>,
        <0, 0, 5*LG_BRICK_HEIGHT-0.08>,
        LG_RADIUS_CYLINDER_MID-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, 5*LG_BRICK_HEIGHT-0.08-LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_MID
      }
    }
    torus {
      LG_RADIUS_CYLINDER_OUTER+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_HEIGHT_BASE+LG_CORNER_SPACE>
    }
    torus {
      LG_RADIUS_CYLINDER_MID+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, 4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, 5*LG_BRICK_HEIGHT-0.08>,
      LG_RADIUS_CYLINDER_INNER
    }
    cylinder {
      <0, 0, 5*LG_BRICK_HEIGHT-0.08-LG_CORNER_SPACE>,
      <0, 0, 5*LG_BRICK_HEIGHT-0.08+LG_E>,
      LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE
    }
  }
  // UPPER NOZZLE BASE
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <LG_RADIUS_CYLINDER_MID, 0.2-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <LG_RADIUS_CYLINDER_MID, -0.2+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, LG_HEIGHT_UPPER_NOZZLE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.12+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.12-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.12+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.12+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.12-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.12-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.12+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.28+LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.12-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE, LG_HEIGHT_UPPER_NOZZLE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>
  }
  difference {
    union {
      cylinder {
        <0.6+LG_E, 0, LG_HEIGHT_UPPER_NOZZLE>,
        <WIDTH/2*LG_BRICK_WIDTH, 0, LG_HEIGHT_UPPER_NOZZLE>,
        0.2-LG_CORNER_SPACE
      }
      cylinder {
        <0.6, 0, LG_HEIGHT_UPPER_NOZZLE>,
        <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>,
        0.2
      }
      box {
        <0.6, 0.2-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <WIDTH/2*LG_BRICK_WIDTH, -0.2+LG_CORNER_SPACE, LG_HEIGHT_UPPER_NOZZLE>
      }
      box {
        <0.6, 0.2, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2, LG_HEIGHT_UPPER_NOZZLE>
      }
    }
    box {
      <WIDTH/2*LG_BRICK_WIDTH-0.08, 0.12, 4*LG_BRICK_HEIGHT+0.08>,
      <WIDTH/2*LG_BRICK_WIDTH, -0.12, 4*LG_BRICK_HEIGHT+0.28>
    }
    box {
      <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.12+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
      <WIDTH/2*LG_BRICK_WIDTH+LG_E, -0.12-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.28+LG_CORNER_SPACE>
    }
  }
  // UPPER NOZZLE
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <WIDTH/2*LG_BRICK_WIDTH+0.6-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>
  }
  torus {
    0.12-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>
  }
  torus {
    0.07+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>
  }
  difference {
    union {
      cylinder {
        <WIDTH/2*LG_BRICK_WIDTH-LG_E, 0, LG_HEIGHT_UPPER_NOZZLE>,
        <WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <WIDTH/2*LG_BRICK_WIDTH, 0, LG_HEIGHT_UPPER_NOZZLE>,
        <WIDTH/2*LG_BRICK_WIDTH+0.6-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>,
        LG_KNOB_INNER_RADIUS
      }
      lg_connect_tori_union (
        <WIDTH/2*LG_BRICK_WIDTH+0.6-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>,
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
        <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>,
        0.12-LG_CORNER_SPACE
      )
    }
    torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>
    }
    cylinder {
      <WIDTH/2*LG_BRICK_WIDTH, 0, LG_HEIGHT_UPPER_NOZZLE>,
      <WIDTH/2*LG_BRICK_WIDTH+0.64, 0, LG_HEIGHT_UPPER_NOZZLE>,
      0.07
    }
    cylinder {
      <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>,
      <WIDTH/2*LG_BRICK_WIDTH+0.64+LG_E, 0, LG_HEIGHT_UPPER_NOZZLE>,
      0.07+LG_CORNER_SPACE
    }
  }
  // SIDE SNAPS
  #declare MIR = 0;
  #while (MIR < 2)
  difference {
    union {
      difference {
        union {
          torus {
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            translate <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
            LG_RADIUS_SIDE_SNAP
          }
        }
        box {
          <-LG_RADIUS_SIDE_SNAP-LG_E, -LG_E, 0>,
          <LG_RADIUS_SIDE_SNAP+LG_E, LENGTH/2*LG_BRICK_WIDTH+LG_E, LG_RADIUS_SIDE_SNAP+LG_E>
        }
      }
      difference {
        union {
          torus {
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            translate <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
            LG_RADIUS_SIDE_SNAP
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE
          }
          matrix <1, 0, 0, 0, 1, 0, 0, -0.5, 1, 0, 0, 0>
        }
        box {
          <-LG_RADIUS_SIDE_SNAP-LG_E, -LG_E, -LG_RADIUS_SIDE_SNAP-LG_E>,
          <LG_RADIUS_SIDE_SNAP+LG_E, LENGTH/2*LG_BRICK_WIDTH+LG_RADIUS_SIDE_SNAP, 0>
        }
      }
      #if (MIR = 1)
      scale <1, -1, 1>
      #end
      translate <0, 0, LG_HEIGHT_SIDE_SNAP>
    }
    cylinder {
      <0, 0, LG_HEIGHT_SIDE_SNAP-LG_RADIUS_SIDE_SNAP-LG_E>,
      <0, 0, LG_HEIGHT_SIDE_SNAP+LG_RADIUS_SIDE_SNAP+LG_E>,
      0.6+LG_E
    }
  }
  #declare MIR = MIR + 1;
  #end
}

#declare lg_2793_clear =
merge {
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
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
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  // CYLINDER BASE
  difference {
    merge {
      box {
        <WIDTH/2*-LG_BRICK_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <WIDTH/2*LG_BRICK_WIDTH, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE-LG_CORNER_SPACE>
      }
      box {
        <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH, LG_CORNER_SPACE>,
        <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH, LG_HEIGHT_BASE-LG_CORNER_SPACE>
      }
      box {
        <WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
        <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_HEIGHT_BASE>
      }
    }
    difference {
      box {
        <WIDTH/2*-LG_BRICK_WIDTH+LG_WALL_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_E>,
        <WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LENGTH/2*-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_HEIGHT_BASE_INNER>
      }
      difference {
        merge {
          cylinder {
            <0, LENGTH/2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>,
            <0, LENGTH/2*-LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>
            LG_BEAM_WIDTH/2
          }
          box {
            <-LG_BEAM_WIDTH/2, LENGTH/2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>,
            <LG_BEAM_WIDTH/2, LENGTH/2*-LG_BRICK_WIDTH, LG_HEIGHT_BASE_INNER+LG_E>
          }
          cylinder {
            <0, 0, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>,
            <WIDTH/2*LG_BRICK_WIDTH, 0, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>,
            LG_TECH_HOLE_RADIUS
          }
          box {
            <0, LG_TECH_HOLE_RADIUS, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>,
            <WIDTH/2*LG_BRICK_WIDTH, -LG_TECH_HOLE_RADIUS, LG_HEIGHT_BASE_INNER+LG_E>
          }
          object {
            lg_brick_cylinder
          }
        }
        cylinder {
          <0, 0.08, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>,
          <0, -0.08, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>,
          0.24
        }
        box {
          <-0.24, 0.08, -LG_E>,
          <0.24, -0.08, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>
        }
      }
    }
    cylinder {
      <0.5*LG_BRICK_WIDTH, 0, 0.56>,
      <0.5*LG_BRICK_WIDTH, 0, LG_HEIGHT_BASE+LG_E>,
      0.08
    }
    sphere {
      <0.5*LG_BRICK_WIDTH, 0, 0.56>,
      0.08
    }
    cylinder {
      <0.5*LG_BRICK_WIDTH, 0, 0.56>,
      <WIDTH/2*LG_BRICK_WIDTH+LG_E, 0, 0.56>,
      0.08
    }
    object {
      lg_tech_hole_group (2, 1)
      rotate <0, 0, 90>
      translate <0, 0, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>
    }
  }
  box {
    <WIDTH/2*-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, LG_WALL_WIDTH/4, 0>,
    <-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -LG_WALL_WIDTH/4, LG_HEIGHT_BASE_INNER+LG_E>
  }
  box {
    <LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_WALL_WIDTH/4, 0>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -LG_WALL_WIDTH/4, LG_BRICK_HEIGHT-LG_BRICK_WIDTH/2>
  }
  // LOWER NOZZLE
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <WIDTH/2*LG_BRICK_WIDTH+0.6-LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>
  }
  torus {
    0.12-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>
  }
  torus {
    0.07+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>
  }
  difference {
    merge {
      cylinder {
        <WIDTH/2*LG_BRICK_WIDTH-LG_E, 0, LG_HEIGHT_LOWER_NOZZLE>,
        <WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <WIDTH/2*LG_BRICK_WIDTH, 0, LG_HEIGHT_LOWER_NOZZLE>,
        <WIDTH/2*LG_BRICK_WIDTH+0.6-LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>,
        LG_KNOB_INNER_RADIUS
      }
      lg_connect_tori_merge (
        <WIDTH/2*LG_BRICK_WIDTH+0.6-LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>,
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
        <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>,
        0.12-LG_CORNER_SPACE
      )
    }
    torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>
    }
    cylinder {
      <0, 0, LG_HEIGHT_LOWER_NOZZLE>,
      <WIDTH/2*LG_BRICK_WIDTH+0.64, 0, LG_HEIGHT_LOWER_NOZZLE>,
      0.07
    }
    cylinder {
      <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_LOWER_NOZZLE>,
      <WIDTH/2*LG_BRICK_WIDTH+0.64+LG_E, 0, LG_HEIGHT_LOWER_NOZZLE>,
      0.07+LG_CORNER_SPACE
    }
  }
  // MAIN CYLINDER
  torus {
    0.76-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
    0.6+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 5*LG_BRICK_HEIGHT-0.08-LG_CORNER_SPACE>
  }
  torus {
    0.68-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 5*LG_BRICK_HEIGHT-0.08-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, LG_HEIGHT_BASE-LG_E>,
        <0, 0, LG_HEIGHT_BASE+LG_CORNER_SPACE>,
        0.76+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_BASE>,
        <0, 0, 4*LG_BRICK_HEIGHT>,
        0.76-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_BASE+LG_CORNER_SPACE>,
        <0, 0, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        0.76
      }
      cylinder {
        <0, 0, 4*LG_BRICK_HEIGHT-LG_E>,
        <0, 0, 4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
        0.68+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 4*LG_BRICK_HEIGHT>,
        <0, 0, 5*LG_BRICK_HEIGHT-0.08>,
        0.68-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, 5*LG_BRICK_HEIGHT-0.08-LG_CORNER_SPACE>,
        0.68
      }
    }
    torus {
      0.76+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_HEIGHT_BASE+LG_CORNER_SPACE>
    }
    torus {
      0.68+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, 4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, 5*LG_BRICK_HEIGHT-0.08>,
      0.6
    }
    cylinder {
      <0, 0, 5*LG_BRICK_HEIGHT-0.08-LG_CORNER_SPACE>,
      <0, 0, 5*LG_BRICK_HEIGHT-0.08+LG_E>,
      0.6+LG_CORNER_SPACE
    }
  }
  // UPPER NOZZLE BASE
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <0.68, 0.2-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <0.68, -0.2+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, LG_HEIGHT_UPPER_NOZZLE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.12+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.12-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.12+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.12+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.12-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.12-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.12+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.28+LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.12-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE, LG_HEIGHT_UPPER_NOZZLE>,
    LG_CORNER_SPACE
  }
  cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
  }
  torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>
  }
  difference {
    merge {
      cylinder {
        <0.6+LG_E, 0, LG_HEIGHT_UPPER_NOZZLE>,
        <WIDTH/2*LG_BRICK_WIDTH, 0, LG_HEIGHT_UPPER_NOZZLE>,
        0.2-LG_CORNER_SPACE
      }
      cylinder {
        <0.6, 0, LG_HEIGHT_UPPER_NOZZLE>,
        <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>,
        0.2
      }
      box {
        <0.6, 0.2-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <WIDTH/2*LG_BRICK_WIDTH, -0.2+LG_CORNER_SPACE, LG_HEIGHT_UPPER_NOZZLE>
      }
      box {
        <0.6, 0.2, 4*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2, LG_HEIGHT_UPPER_NOZZLE>
      }
    }
    box {
      <WIDTH/2*LG_BRICK_WIDTH-0.08, 0.12, 4*LG_BRICK_HEIGHT+0.08>,
      <WIDTH/2*LG_BRICK_WIDTH, -0.12, 4*LG_BRICK_HEIGHT+0.28>
    }
    box {
      <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.12+LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
      <WIDTH/2*LG_BRICK_WIDTH+LG_E, -0.12-LG_CORNER_SPACE, 4*LG_BRICK_HEIGHT+0.28+LG_CORNER_SPACE>
    }
  }
  // UPPER NOZZLE
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <WIDTH/2*LG_BRICK_WIDTH+0.6-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>
  }
  torus {
    0.12-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>
  }
  torus {
    0.07+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>
  }
  difference {
    merge {
      cylinder {
        <WIDTH/2*LG_BRICK_WIDTH-LG_E, 0, LG_HEIGHT_UPPER_NOZZLE>,
        <WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <WIDTH/2*LG_BRICK_WIDTH, 0, LG_HEIGHT_UPPER_NOZZLE>,
        <WIDTH/2*LG_BRICK_WIDTH+0.6-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>,
        LG_KNOB_INNER_RADIUS
      }
      lg_connect_tori_merge (
        <WIDTH/2*LG_BRICK_WIDTH+0.6-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>,
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
        <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>,
        0.12-LG_CORNER_SPACE
      )
    }
    torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>
    }
    cylinder {
      <WIDTH/2*LG_BRICK_WIDTH, 0, LG_HEIGHT_UPPER_NOZZLE>,
      <WIDTH/2*LG_BRICK_WIDTH+0.64, 0, LG_HEIGHT_UPPER_NOZZLE>,
      0.07
    }
    cylinder {
      <WIDTH/2*LG_BRICK_WIDTH+0.64-LG_CORNER_SPACE, 0, LG_HEIGHT_UPPER_NOZZLE>,
      <WIDTH/2*LG_BRICK_WIDTH+0.64+LG_E, 0, LG_HEIGHT_UPPER_NOZZLE>,
      0.07+LG_CORNER_SPACE
    }
  }
  // SIDE SNAPS
  #declare MIR = 0;
  #while (MIR < 2)
  difference {
    merge {
      difference {
        merge {
          torus {
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            translate <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
            LG_RADIUS_SIDE_SNAP
          }
        }
        box {
          <-LG_RADIUS_SIDE_SNAP-LG_E, -LG_E, 0>,
          <LG_RADIUS_SIDE_SNAP+LG_E, LENGTH/2*LG_BRICK_WIDTH+LG_E, LG_RADIUS_SIDE_SNAP+LG_E>
        }
      }
      difference {
        merge {
          torus {
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            translate <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
            LG_RADIUS_SIDE_SNAP
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE
          }
          matrix <1, 0, 0, 0, 1, 0, 0, -0.5, 1, 0, 0, 0>
        }
        box {
          <-LG_RADIUS_SIDE_SNAP-LG_E, -LG_E, -LG_RADIUS_SIDE_SNAP-LG_E>,
          <LG_RADIUS_SIDE_SNAP+LG_E, LENGTH/2*LG_BRICK_WIDTH+LG_RADIUS_SIDE_SNAP, 0>
        }
      }
      #if (MIR = 1)
      scale <1, -1, 1>
      #end
      translate <0, 0, LG_HEIGHT_SIDE_SNAP>
    }
    cylinder {
      <0, 0, LG_HEIGHT_SIDE_SNAP-LG_RADIUS_SIDE_SNAP-LG_E>,
      <0, 0, LG_HEIGHT_SIDE_SNAP+LG_RADIUS_SIDE_SNAP+LG_E>,
      0.6+LG_E
    }
  }
  #declare MIR = MIR + 1;
  #end
}

#end
