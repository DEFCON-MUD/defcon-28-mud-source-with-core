inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 38, 3 }));
  set_short( "Passage - x19y38z3" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y39z3.c",
  "south" : DIR+"/rooms/x19y37z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
