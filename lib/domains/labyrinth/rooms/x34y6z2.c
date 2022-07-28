inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 6, 2 }));
  set_short( "Hallway - x34y6z2" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y6z2.c",
  "east" : DIR+"/rooms/x35y6z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
