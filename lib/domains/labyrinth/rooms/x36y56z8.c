inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 56, 8 }));
  set_short( "Passage - x36y56z8" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y56z8.c",
  "east" : DIR+"/rooms/x37y56z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
