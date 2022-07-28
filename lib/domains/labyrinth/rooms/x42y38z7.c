inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 38, 7 }));
  set_short( "Hallway - x42y38z7" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y38z7.c",
  "east" : DIR+"/rooms/x43y38z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
