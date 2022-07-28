inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 17, 0 }));
  set_short( "Corridor - x47y17z0" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y18z0.c",
  "south" : DIR+"/rooms/x47y16z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
