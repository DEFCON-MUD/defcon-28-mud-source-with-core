inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 24, 46, -0 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of GPU's that burned so bright they went radioactive in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^" );

  set_objects(
    DIR+"/npc/goon.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/23_46_-0.c",
  "east" : DIR+"/rooms/25_46_-0.c"
  ]) );

}

