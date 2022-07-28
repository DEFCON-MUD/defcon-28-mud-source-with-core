inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 56, 7 }));
  set_short( "Hallway - x17y56z7" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y56z7.c",
  "east" : DIR+"/rooms/x18y56z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
