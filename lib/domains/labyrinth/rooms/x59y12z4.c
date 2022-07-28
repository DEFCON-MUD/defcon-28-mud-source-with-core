inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 12, 4 }));
  set_short( "Passage - x59y12z4" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y12z4.c",
  "south" : DIR+"/rooms/x59y11z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
