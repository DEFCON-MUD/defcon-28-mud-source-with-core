inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 53, 4 }));
  set_short( "Hallway - x1y53z4" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y54z4.c",
  "south" : DIR+"/rooms/x1y52z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
