inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 6, 3, -1 }));
  set_dimensions(({ 10, 10 }));

  set_short( "Labyrinth" );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^" );

  set_objects(
    DIR+"/npc/technician.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/5_3_-1.c",
  "south" : DIR+"/rooms/6_4_-1.c",
  "east" : DIR+"/rooms/7_3_-1.c",
  "northeast" : DIR+"/rooms/7_2_-1.c"
  ]) );

}

