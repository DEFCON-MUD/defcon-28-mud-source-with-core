inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 48, 7 }));
  set_short( "Passage - x30y48z7" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y48z7.c",
  "east" : DIR+"/rooms/x31y48z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
