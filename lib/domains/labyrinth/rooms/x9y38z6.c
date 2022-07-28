inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 38, 6 }));
  set_short( "Passage - x9y38z6" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y38z6.c",
  "north" : DIR+"/rooms/x9y39z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
