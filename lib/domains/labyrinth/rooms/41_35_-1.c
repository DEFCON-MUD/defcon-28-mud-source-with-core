inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 41, 35, -1 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^" );

  set_objects(
    DIR+"/npc/banker.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/41_36_-1.c",
  "north" : DIR+"/rooms/41_34_-1.c"
  ]) );

}

