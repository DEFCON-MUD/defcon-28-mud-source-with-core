inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 30, 1 }));
  set_short( "Hallway - x26y30z1" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y30z1.c",
  "east" : DIR+"/rooms/x27y30z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
