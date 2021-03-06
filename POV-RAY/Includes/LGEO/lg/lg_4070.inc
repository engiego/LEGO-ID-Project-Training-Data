/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980315 Lutz Uhlmann                                                       */
/* 20071025 Lutz Uhlmann added stud logo for QUAL > 2                          */
/* 20080302 Lutz Uhlmann changed QUAL to lg_quality                            */
/* 20080910 Lutz Uhlmann fixed back difference                                 */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4070: Brick 1 x 1 x 1 with vertical Stud ((Headlight Brick)              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4070)
#else
#declare LENGTH = 1;
#declare WIDTH = 1;
#declare lg_4070 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 sphere {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_WALL_WIDTH>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    (LG_KNOB_RADIUS)
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT>,
    <0, 0, -LG_CORNER_SPACE>,
    (LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE)
   }
   torus {
    (LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE),
    (LG_KNOB_CORNER_SPACE)
    rotate <90, 0, 0>
    translate <0, 0, (LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE)>
   }
  }
  union{
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>,
    <0, 0, -LG_BRICK_WIDTH/2>,
    LG_KNOB_INNER_RADIUS
   }
   object {
    lg_knob_inner_space
    translate <0, 0, -LG_TOP_HEIGHT>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_E>
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
   intersection {
    box {
     <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_E>
     <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>
    }
    cylinder {
     <0, 0, -LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.06>,
     <0, 0, -LG_BRICK_HEIGHT-LG_E>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
   }
   box {
    <-LENGTH/2*LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-LENGTH/2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_WALL_WIDTH>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08+LG_E, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
   }
  }
 }
 object {
  lg_tech_knob
  rotate <0,90,0>
  translate <0.24,0,-LG_BRICK_WIDTH/2>
 } 
 #ifdef (lg_quality)
  #if (lg_quality > 2)
   object { lego_logo_text translate <0,0,LG_KNOB_HEIGHT> rotate <0, 0, 180> }
  #end
 #end
} 

#declare lg_4070_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 sphere {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.16-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  merge {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_WALL_WIDTH>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    (LG_KNOB_RADIUS)
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT>,
    <0, 0, -LG_CORNER_SPACE>,
    (LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE)
   }
   torus {
    (LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE),
    (LG_KNOB_CORNER_SPACE)
    rotate <90, 0, 0>
    translate <0, 0, (LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE)>
   }
  }
  merge{
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>,
    <0, 0, -LG_BRICK_WIDTH/2>,
    LG_KNOB_INNER_RADIUS
   }
   object {
    lg_knob_inner_space_clear
    translate <0, 0, -LG_TOP_HEIGHT>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_E>
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
   intersection {
    box {
     <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_E>
     <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>
    }
    cylinder {
     <0, 0, -LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.06>,
     <0, 0, -LG_BRICK_HEIGHT-LG_E>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
   }
   box {
    <-LENGTH/2*LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-LENGTH/2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_WALL_WIDTH>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08+LG_E, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
   }
  }
 }
 object {
  lg_tech_knob_clear
  rotate <0,90,0>
  translate <0.24,0,-LG_BRICK_WIDTH/2>
 } 
 #ifdef (lg_quality)
  #if (lg_quality > 2)
   object { lego_logo_text translate <0,0,LG_KNOB_HEIGHT> rotate <0, 0, 180> }
  #end
 #end
} 

#end
