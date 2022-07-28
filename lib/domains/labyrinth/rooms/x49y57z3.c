inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 57, 3 }));
  set_short( "Hallway - x49y57z3" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y58z3.c",
  "south" : DIR+"/rooms/x49y56z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
