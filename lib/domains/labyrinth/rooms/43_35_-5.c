inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 43, 35, -5 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^" );

  set_objects(
    DIR+"/npc/glorzo.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/43_36_-5.c",
  "north" : DIR+"/rooms/43_34_-5.c"
  ]) );

}

