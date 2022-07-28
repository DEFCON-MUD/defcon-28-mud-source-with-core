inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 0, 9 }));
  set_short( "Corridor - x52y0z9" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y0z9.c",
  "east" : DIR+"/rooms/x53y0z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
