inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 16, 9 }));
  set_short( "Passage - x50y16z9" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y16z9.c",
  "east" : DIR+"/rooms/x51y16z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
