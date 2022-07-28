inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 54, 9 }));
  set_short( "Corridor - x35y54z9" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y54z9.c",
  "north" : DIR+"/rooms/x35y55z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
