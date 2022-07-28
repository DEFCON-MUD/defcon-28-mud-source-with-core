inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 0, 5 }));
  set_short( "Corridor - x42y0z5" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y0z5.c",
  "east" : DIR+"/rooms/x43y0z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
