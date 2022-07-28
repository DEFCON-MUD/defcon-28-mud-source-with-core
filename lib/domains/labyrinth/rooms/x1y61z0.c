inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 61, 0 }));
  set_short( "Hallway - x1y61z0" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y62z0.c",
  "south" : DIR+"/rooms/x1y60z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
