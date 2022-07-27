inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 56, 0 }));
  set_short( "Hallway - x1y56z0" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y56z0.c",
  "north" : DIR+"/rooms/x1y57z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
