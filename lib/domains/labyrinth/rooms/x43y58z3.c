inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 58, 3 }));
  set_short( "Hallway - x43y58z3" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y58z3.c",
  "east" : DIR+"/rooms/x44y58z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crappy sales material in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
