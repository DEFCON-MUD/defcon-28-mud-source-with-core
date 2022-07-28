inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 24, 0 }));
  set_short( "Hallway - x21y24z0" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y24z0.c",
  "north" : DIR+"/rooms/x21y25z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
