inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 6, 9 }));
  set_short( "Hallway - x39y6z9" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y6z9.c",
  "east" : DIR+"/rooms/x40y6z9.c",
  "north" : DIR+"/rooms/x39y7z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
