inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 36, 2 }));
  set_short( "Hallway - x22y36z2" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y36z2.c",
  "east" : DIR+"/rooms/x23y36z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
