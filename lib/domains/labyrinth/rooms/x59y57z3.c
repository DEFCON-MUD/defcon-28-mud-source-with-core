inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 57, 3 }));
  set_short( "Corridor - x59y57z3" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y58z3.c",
  "south" : DIR+"/rooms/x59y56z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
