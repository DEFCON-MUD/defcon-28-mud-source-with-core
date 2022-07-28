inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 38, 1 }));
  set_short( "Passage - x25y38z1" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y38z1.c",
  "north" : DIR+"/rooms/x25y39z1.c",
  "south" : DIR+"/rooms/x25y37z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
