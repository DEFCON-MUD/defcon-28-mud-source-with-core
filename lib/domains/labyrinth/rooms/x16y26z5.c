inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 26, 5 }));
  set_short( "Passage - x16y26z5" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y26z5.c",
  "east" : DIR+"/rooms/x17y26z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
