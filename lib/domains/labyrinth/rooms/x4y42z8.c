inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 42, 8 }));
  set_short( "Passage - x4y42z8" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y42z8.c",
  "east" : DIR+"/rooms/x5y42z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
