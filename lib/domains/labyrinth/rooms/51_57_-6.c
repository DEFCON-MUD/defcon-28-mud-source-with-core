inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 51, 57, -6 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^" );

  set_objects(
    DIR+"/npc/monkey.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/51_58_-6.c",
  "north" : DIR+"/rooms/51_56_-6.c"
  ]) );

}

