inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 34, 3 }));
  set_short( "Hallway - x9y34z3" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y35z3.c",
  "south" : DIR+"/rooms/x9y33z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
