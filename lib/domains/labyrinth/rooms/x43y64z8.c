inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 64, 8 }));
  set_short( "Passage - x43y64z8" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y64z8.c",
  "east" : DIR+"/rooms/x44y64z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
