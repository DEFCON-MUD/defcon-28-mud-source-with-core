inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 62, 3 }));
  set_short( "Corridor - x38y62z3" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y62z3.c",
  "east" : DIR+"/rooms/x39y62z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
