inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 39, 9 }));
  set_short( "Hallway - x39y39z9" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y40z9.c",
  "south" : DIR+"/rooms/x39y38z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
