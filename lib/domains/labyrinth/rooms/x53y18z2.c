inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 18, 2 }));
  set_short( "Passage - x53y18z2" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y18z2.c",
  "east" : DIR+"/rooms/x54y18z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
