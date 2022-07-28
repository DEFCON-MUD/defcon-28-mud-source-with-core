inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 22, 8 }));
  set_short( "Hallway - x19y22z8" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y22z8.c",
  "north" : DIR+"/rooms/x19y23z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
