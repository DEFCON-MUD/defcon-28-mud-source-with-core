inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 46, 2 }));
  set_short( "Corridor - x42y46z2" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y46z2.c",
  "east" : DIR+"/rooms/x43y46z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
