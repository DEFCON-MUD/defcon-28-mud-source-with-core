inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 49, 49, -8 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of put kevin back stickers in this pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^" );

  set_objects(
    DIR+"/npc/enforcer.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/49_50_-8.c",
  "north" : DIR+"/rooms/49_48_-8.c"
  ]) );

}

