inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 59, 6 }));
  set_short( "Corridor - x11y59z6" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y60z6.c",
  "south" : DIR+"/rooms/x11y58z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
