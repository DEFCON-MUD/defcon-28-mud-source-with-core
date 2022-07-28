inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 53, 1 }));
  set_short( "Passage - x19y53z1" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y54z1.c",
  "south" : DIR+"/rooms/x19y52z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
