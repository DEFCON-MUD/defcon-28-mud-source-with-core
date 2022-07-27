inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 22, 8 }));
  set_short( "Hallway - x60y22z8" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y22z8.c",
  "east" : DIR+"/rooms/x61y22z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
