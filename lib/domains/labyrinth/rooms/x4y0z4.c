inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 0, 4 }));
  set_short( "Hallway - x4y0z4" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y0z4.c",
  "east" : DIR+"/rooms/x5y0z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
