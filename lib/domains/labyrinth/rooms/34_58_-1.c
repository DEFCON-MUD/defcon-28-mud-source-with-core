inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 34, 58, -1 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^" );

  set_objects(
    DIR+"/npc/goon.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/33_58_-1.c",
  "east" : DIR+"/rooms/35_58_-1.c"
  ]) );

}

