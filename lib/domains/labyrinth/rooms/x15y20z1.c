inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 20, 1 }));
  set_short( "Passage - x15y20z1" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y20z1.c",
  "south" : DIR+"/rooms/x15y19z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the glorzo in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
