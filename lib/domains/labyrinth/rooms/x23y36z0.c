inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 36, 0 }));
  set_short( "Passage - x23y36z0" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y37z0.c",
  "south" : DIR+"/rooms/x23y35z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
