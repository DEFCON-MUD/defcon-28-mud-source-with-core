inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 16, 0 }));
  set_short( "Corridor - x54y16z0" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y16z0.c",
  "east" : DIR+"/rooms/x55y16z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
