inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 45, 4 }));
  set_short( "Passage - x1y45z4" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y46z4.c",
  "south" : DIR+"/rooms/x1y44z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
