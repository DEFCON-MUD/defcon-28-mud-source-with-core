inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 58, 1 }));
  set_short( "Corridor - x25y58z1" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y58z1.c",
  "east" : DIR+"/rooms/x26y58z1.c",
  "north" : DIR+"/rooms/x25y59z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
