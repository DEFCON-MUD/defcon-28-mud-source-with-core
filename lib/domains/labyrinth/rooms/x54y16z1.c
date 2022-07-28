inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 16, 1 }));
  set_short( "Corridor - x54y16z1" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y16z1.c",
  "east" : DIR+"/rooms/x55y16z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
