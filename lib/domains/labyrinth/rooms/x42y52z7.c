inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 52, 7 }));
  set_short( "Corridor - x42y52z7" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y52z7.c",
  "east" : DIR+"/rooms/x43y52z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
