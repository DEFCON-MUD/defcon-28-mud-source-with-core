inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 47, 7 }));
  set_short( "Hallway - x35y47z7" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y48z7.c",
  "south" : DIR+"/rooms/x35y46z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
