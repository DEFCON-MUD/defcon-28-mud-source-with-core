inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 54, 8 }));
  set_short( "Hallway - x56y54z8" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y54z8.c",
  "east" : DIR+"/rooms/x57y54z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
