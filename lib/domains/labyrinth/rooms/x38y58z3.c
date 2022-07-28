inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 58, 3 }));
  set_short( "Corridor - x38y58z3" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y58z3.c",
  "east" : DIR+"/rooms/x39y58z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
