inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 16, 5 }));
  set_short( "Hallway - x61y16z5" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y16z5.c",
  "south" : DIR+"/rooms/x61y15z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
