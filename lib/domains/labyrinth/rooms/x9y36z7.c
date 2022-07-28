inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 36, 7 }));
  set_short( "Passage - x9y36z7" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y36z7.c",
  "east" : DIR+"/rooms/x10y36z7.c",
  "north" : DIR+"/rooms/x9y37z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
