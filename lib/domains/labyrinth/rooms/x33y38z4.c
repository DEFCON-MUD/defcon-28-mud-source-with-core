inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 38, 4 }));
  set_short( "Passage - x33y38z4" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y38z4.c",
  "north" : DIR+"/rooms/x33y39z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
