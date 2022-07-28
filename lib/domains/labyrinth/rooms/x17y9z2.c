inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 9, 2 }));
  set_short( "Passage - x17y9z2" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y10z2.c",
  "south" : DIR+"/rooms/x17y8z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
