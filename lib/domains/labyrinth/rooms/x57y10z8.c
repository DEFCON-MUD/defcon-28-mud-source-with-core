inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 10, 8 }));
  set_short( "Hallway - x57y10z8" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y10z8.c",
  "east" : DIR+"/rooms/x58y10z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
