inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 4, 8 }));
  set_short( "Hallway - x11y4z8" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y4z8.c",
  "north" : DIR+"/rooms/x11y5z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
