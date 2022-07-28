inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 42, 9 }));
  set_short( "Passage - x52y42z9" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y42z9.c",
  "east" : DIR+"/rooms/x53y42z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
