inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 0, 3 }));
  set_short( "Corridor - x23y0z3" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y0z3.c",
  "east" : DIR+"/rooms/x24y0z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
