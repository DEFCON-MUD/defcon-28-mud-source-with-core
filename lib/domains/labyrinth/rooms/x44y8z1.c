inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 8, 1 }));
  set_short( "Hallway - x44y8z1" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y8z1.c",
  "east" : DIR+"/rooms/x45y8z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
