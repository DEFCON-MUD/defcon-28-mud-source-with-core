inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 50, 54, -9 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^" );

  set_objects(
    DIR+"/npc/analyst.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/49_54_-9.c",
  "east" : DIR+"/rooms/51_54_-9.c"
  ]) );

}

