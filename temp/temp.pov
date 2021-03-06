// POV Scene File for Part Number = 14716                   
// String Input Parameters = (part_number, camera_distance_Int, camera_rotation-x_Int, 
//                            camera_rotate-y_Int, Light_RGB_Vector, Number_Lights-X, 
//                            Number_Lights-Y_Int, Background_RGB_Vector, Brick_Include_Filename, 
//                            Brick_lg_partnum, Rotation_Vector, Translation_Vector, 
//                            Brick_RGB_Vector, Plane_RGB_Vector, Plane_Diffusion_Int)
#version 3.8
#include "screen.inc"     
#include "math.inc"   
#include "functions.inc"    
#include "colors.inc"  
  



#declare LDXQual = 3.000000;	// Quality (0 = Bounding Box; 1 = No Refraction; 2 = Normal; 3 = Stud Logos)
#declare LDXStuds = 1;	// Show studs? (1 = YES; 0 = NO)
#declare LDXRefls = 1;	// Reflections? (1 = YES; 0 = NO)
#declare LDXShads = 1;	// Shadows? (1 = YES; 0 = NO)
#declare LDXFloor = 1;	// Include Floor? (1 = YES; 0 = NO)

// Model bounds information
#declare LDXMinX = -60.000000;
#declare LDXMinY = -28.000000;
#declare LDXMinZ = -60.000000;
#declare LDXMaxX = 80.000000;
#declare LDXMaxY = 0.000000;
#declare LDXMaxZ = 60.000000;
#declare LDXCenterX = 10.000000;
#declare LDXCenterY = -14.000000;
#declare LDXCenterZ = 0.000000;
#declare LDXCenter = <LDXCenterX,LDXCenterY,LDXCenterZ>;
#declare LDXRadius = 186.504684;

#declare LDXFloorLoc = LDXMaxY;	// Floor location. (Dependent on floor axis; MAX_Y is bottom of model)
#declare LDXFloorAxis = y;	// Floor axis (x, y, or z)

#declare LDXAmb = 0.000000;
#declare LDXDif = 0.000000;
#declare LDXRefl = 0.025000;
#declare LDXPhong = 1.000000;
#declare LDXPhongS = 40.000000;
#declare LDXTRefl = 0.015000;
#declare LDXTFilt = 0.750000;
#declare LDXTTransmit = 0.150000;
#declare LDXIoR = 1.250000;
#declare LDXRubberRefl = 0.000000;
#declare LDXRubberPhong = 0.100000;
#declare LDXRubberPhongS = 10.000000;
#declare LDXChromeAmb = 0.250000;
#declare LDXChromeDif = 0.600000;
#declare LDXChromeRefl = 0.500000;
#declare LDXChromeBril = 5.000000;
#declare LDXChromeSpec = 0.700000;
#declare LDXChromeRough = 0.010000;
#declare LDXIPov = 1;	// Use inline POV code from LDraw file? (1 = YES; 0 = NO)
#declare LDXBgR = 1.000000;	// Background Red
#declare LDXBgG = 1.000000;	// Background Green
#declare LDXBgB = 1.000000;	// Background Blue
#declare LDXOrigVer = version;	// DO NOT MODIFY

#declare lg_quality = 3;
global_settings {
	assumed_gamma 1.4
	radiosity {
	  pretrace_start 0.08
      pretrace_end   0.01
      count 150
      nearest_count 10
      error_bound 0.5
      recursion_limit 3
      low_error_factor 0.5
      gray_threshold 0
      minimum_reuse 0.005
      maximum_reuse 0.2
      brightness 1.0
      adc_bailout 0.01/2
	}
}


#local cam_dist = 15;                   //50 ---- 75
#local cam_move = 1/2;
#local cam_area = 2;
#local cam_loca = -z * cam_dist;
#local cam_look = <0,1.44,0>;
#local cam_angl = 45;
#local cam_tran = transform
{
	rotate		+x * asind(tand(35))    //0 ( horizontal ) ---- 45 (vertical)
	rotate		+y * 225                 //can be anything (degress)
	rotate      +z * 0
	translate	+y * cam_move
	}
	
Set_Camera_Orthographic(false)
Set_Camera_Transform(cam_tran)
Set_Camera(cam_loca, cam_look, cam_angl)

light_source {
    <5, 5, 5>,
    rgb <0.9420778960700524,0.8455162119620765,0.9359169942773703>                              //RGB Vector with 3 values between 0.8 and 1.0
    area_light <5, 0, 0>, <0, 0, 5>, 5,5     //How many x lights, and how many y lights (integers)
    adaptive 1
    jitter
  }




background { color rgb <0.1975550548742615,0.9884066907171114,0.7509304746108175> transmit 1}             //RGB Vector with 3 values
#include "lg_defs.inc"                  //For stuff to make bricks
#include "lg_14716.inc"                           //LG Brick Include String

#local brick_model = object { 
        lg_14716                              //lg + part num string
        rotate <-90,0,0>                //XYZ Vector (normal rotation = <-90,0,0>
        translate <0,2.88,0>     //XYZ Vecotr (Y is 0.96 for normal brick height)
        texture { pigment { color rgb <0.8412454138258748,0.2913327055476408,0.8307192289885031> }
                  finish {
                    ambient 0
                    diffuse 1
                    brilliance 1
                    phong 1
                    phong_size 40
                    reflection { 0.025 falloff 1 exponent 1 }
                    specular 0.75
                    roughness 0.1
        }}}
           

 
object {brick_model}
       
 
    
#local Max_X = max_extent(brick_model).x;
#local Max_Y = max_extent(brick_model).y;
#local Max_Z = max_extent(brick_model).z;
#local Min_X = min_extent(brick_model).x;
#local Min_Y = min_extent(brick_model).y;
#local Min_Z = min_extent(brick_model).z;


#local box_vertex_1 = < Max_X, Max_Y, Max_Z >;
#local box_vertex_2 = < Max_X, Min_Y, Max_Z >;
#local box_vertex_3 = < Max_X, Max_Y, Min_Z >; 
#local box_vertex_4 = < Max_X, Min_Y, Min_Z >;
#local box_vertex_5 = < Min_X, Max_Y, Max_Z >;
#local box_vertex_6 = < Min_X, Max_Y, Min_Z >;
#local box_vertex_7 = < Min_X, Min_Y, Max_Z >;
#local box_vertex_8 = < Min_X, Min_Y, Min_Z >;

#local possible_screen_max_XY_1 = Get_Screen_XY(box_vertex_1); 
#local possible_screen_max_XY_2 = Get_Screen_XY(box_vertex_2);
#local possible_screen_max_XY_3 = Get_Screen_XY(box_vertex_3); 
#local possible_screen_max_XY_4 = Get_Screen_XY(box_vertex_4);
#local possible_screen_max_XY_5 = Get_Screen_XY(box_vertex_5);
#local possible_screen_max_XY_6 = Get_Screen_XY(box_vertex_6);
#local possible_screen_max_XY_7 = Get_Screen_XY(box_vertex_7);
#local possible_screen_max_XY_8 = Get_Screen_XY(box_vertex_8);

#debug concat("possible_screen_max_XY_1 = (", vstr(2, possible_screen_max_XY_1, ",", 0, -1), ")\n")
#debug concat("possible_screen_max_XY_2 = (", vstr(2, possible_screen_max_XY_2, ",", 0, -1), ")\n")
#debug concat("possible_screen_max_XY_3 = (", vstr(2, possible_screen_max_XY_3, ",", 0, -1), ")\n")
#debug concat("possible_screen_max_XY_4 = (", vstr(2, possible_screen_max_XY_4, ",", 0, -1), ")\n")
#debug concat("possible_screen_max_XY_5 = (", vstr(2, possible_screen_max_XY_5, ",", 0, -1), ")\n")
#debug concat("possible_screen_max_XY_6 = (", vstr(2, possible_screen_max_XY_6, ",", 0, -1), ")\n")
#debug concat("possible_screen_max_XY_7 = (", vstr(2, possible_screen_max_XY_7, ",", 0, -1), ")\n")
#debug concat("possible_screen_max_XY_8 = (", vstr(2, possible_screen_max_XY_8, ",", 0, -1), ")\n")
