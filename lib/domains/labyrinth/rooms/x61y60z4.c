inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 60, 4 }));
  set_short( "Hallway - x61y60z4" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y60z4.c",
  "north" : DIR+"/rooms/x61y61z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
