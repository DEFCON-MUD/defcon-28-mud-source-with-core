inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 23, 7, -6 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^" );

  set_objects(
    DIR+"/npc/banker.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/23_8_-6.c",
  "north" : DIR+"/rooms/23_6_-6.c"
  ]) );

}

