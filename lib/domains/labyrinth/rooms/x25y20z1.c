inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 20, 1 }));
  set_short( "Hallway - x25y20z1" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y20z1.c",
  "north" : DIR+"/rooms/x25y21z1.c",
  "south" : DIR+"/rooms/x25y19z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
