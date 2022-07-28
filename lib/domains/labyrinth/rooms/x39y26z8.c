inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 26, 8 }));
  set_short( "Corridor - x39y26z8" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y26z8.c",
  "north" : DIR+"/rooms/x39y27z8.c",
  "south" : DIR+"/rooms/x39y25z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
