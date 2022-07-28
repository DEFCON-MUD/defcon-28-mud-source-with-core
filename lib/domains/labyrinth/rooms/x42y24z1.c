inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 24, 1 }));
  set_short( "Passage - x42y24z1" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y24z1.c",
  "east" : DIR+"/rooms/x43y24z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
