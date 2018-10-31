/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_93273: Slope Brick Curved 4 x 1 Double                                   */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20121215 Owen Burgoyne                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_93273)
#else
#declare LENGTH = 4;
#declare WIDTH = 1;
#declare CURVE = 2.853;
#declare lg_93273 = 
union {
 // EDGES
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE 
 }
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <(WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  <(WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE 
 }
 sphere {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 intersection {
  union {
   torus {
    CURVE, LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_CORNER_SPACE, (LENGTH*0.5)*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>
   }
   torus {
    CURVE, LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH*0.5)*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>
   }
  }
  union {
   box {
    <0, LG_CORNER_SPACE/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE/2, LG_BRICK_HEIGHT>
   }
  }
 }
 // TOP CURVE
 intersection {
  difference {
   union {
    cylinder {
     <LG_CORNER_SPACE, LENGTH*0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>,
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>,
     CURVE+LG_CORNER_SPACE
    }
    cylinder {
     <0, LENGTH*0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>,
     <LG_BRICK_WIDTH, LENGTH*0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>,
     CURVE
    }
   }
   cylinder {
    <0, LENGTH*0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>,
    <LG_BRICK_WIDTH, LENGTH*0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>,
    CURVE-LG_WALL_WIDTH
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>,
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS
   }
   box {
    <LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>,
    <0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS
   }
  }
  box {
   <LG_CORNER_SPACE, LG_CORNER_SPACE/2, LG_CORNER_SPACE>,
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE/2, LG_BRICK_HEIGHT>
  }
 }
 // SIDE WALLS
 intersection {
  union {
   difference {
    union {
     box {
      <0, LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH, 0.25*LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.25*LENGTH*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.25*LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT>
     }
    }
    box {
     <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_E>,
     <WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.25*LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_INNER_HEIGHT>
    }
   }
   difference {
    union {
     box {
      <0, 0.75*LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, 0.75*LENGTH*LG_BRICK_WIDTH, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, 0.75*LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT>
     }
    }
    box {
     <LG_WALL_WIDTH, 0.75*LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_E>,
     <WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_INNER_HEIGHT>
    }
   }
   difference {
    union {
     box {
      <0, 0.25*LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH, 0.75*LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, 0.25*LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.75*LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_HEIGHT>
     }
    }
    box {
     <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_E>,
     <WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_INNER_HEIGHT>
    }
   }
  }
  cylinder {
   <5, 0.5*LENGTH*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>, <-5, 0.5*LENGTH*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>, CURVE
  }
 }
 box {
  <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_E, LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 object {
  lg_plate_column
  translate <0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
 }
 translate <-WIDTH/2*LG_BRICK_WIDTH, -LENGTH/2*LG_BRICK_WIDTH, 0>
 rotate <0, 0, -90>
}

#declare lg_93273_clear = 
merge {
 // EDGES
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE 
 }
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <(WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  <(WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE 
 }
 sphere {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LENGTH*0.75)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  <((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 intersection {
  merge {
   torus {
    CURVE, LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_CORNER_SPACE, (LENGTH*0.5)*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>
   }
   torus {
    CURVE, LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH*0.5)*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>
   }
  }
  merge {
   box {
    <0, LG_CORNER_SPACE/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE/2, LG_BRICK_HEIGHT>
   }
  }
 }
 // TOP CURVE
 intersection {
  difference {
   merge {
    cylinder {
     <LG_CORNER_SPACE, LENGTH*0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>,
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>,
     CURVE+LG_CORNER_SPACE
    }
    cylinder {
     <0, LENGTH*0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>,
     <LG_BRICK_WIDTH, LENGTH*0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>,
     CURVE
    }
   }
   cylinder {
    <0, LENGTH*0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>,
    <LG_BRICK_WIDTH, LENGTH*0.5*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>,
    CURVE-LG_WALL_WIDTH
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>,
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS
   }
   box {
    <LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>,
    <0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS
   }
  }
  box {
   <LG_CORNER_SPACE, LG_CORNER_SPACE/2, LG_CORNER_SPACE>,
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE/2, LG_BRICK_HEIGHT>
  }
 }
 // SIDE WALLS
 intersection {
  merge {
   difference {
    merge {
     box {
      <0, LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH, 0.25*LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.25*LENGTH*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.25*LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT>
     }
    }
    box {
     <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_E>,
     <WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.25*LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_INNER_HEIGHT>
    }
   }
   difference {
    merge {
     box {
      <0, 0.75*LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, 0.75*LENGTH*LG_BRICK_WIDTH, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, 0.75*LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT>
     }
    }
    box {
     <LG_WALL_WIDTH, 0.75*LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_E>,
     <WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_INNER_HEIGHT>
    }
   }
   difference {
    merge {
     box {
      <0, 0.25*LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH, 0.75*LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, 0.25*LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.75*LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_HEIGHT>
     }
    }
    box {
     <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_E>,
     <WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_INNER_HEIGHT>
    }
   }
  }
  cylinder {
   <5, 0.5*LENGTH*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>, <-5, 0.5*LENGTH*LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-CURVE>, CURVE
  }
 }
 box {
  <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_E, LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 object {
  lg_plate_column
  translate <0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
 }
 translate <-WIDTH/2*LG_BRICK_WIDTH, -LENGTH/2*LG_BRICK_WIDTH, 0>
 rotate <0, 0, -90>
}

#end