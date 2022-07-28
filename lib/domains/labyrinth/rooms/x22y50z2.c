inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 50, 2 }));
  set_short( "Corridor - x22y50z2" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y50z2.c",
  "east" : DIR+"/rooms/x23y50z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
