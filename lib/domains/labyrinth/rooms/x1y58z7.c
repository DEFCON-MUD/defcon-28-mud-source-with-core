inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 58, 7 }));
  set_short( "Hallway - x1y58z7" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y58z7.c",
  "south" : DIR+"/rooms/x1y57z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
