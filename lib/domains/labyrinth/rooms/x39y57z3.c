inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 57, 3 }));
  set_short( "Passage - x39y57z3" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y58z3.c",
  "south" : DIR+"/rooms/x39y56z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
