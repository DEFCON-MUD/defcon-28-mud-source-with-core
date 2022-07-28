inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 55, 1 }));
  set_short( "Hallway - x21y55z1" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y56z1.c",
  "south" : DIR+"/rooms/x21y54z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
