inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 58, 6 }));
  set_short( "Corridor - x54y58z6" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y58z6.c",
  "east" : DIR+"/rooms/x55y58z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
