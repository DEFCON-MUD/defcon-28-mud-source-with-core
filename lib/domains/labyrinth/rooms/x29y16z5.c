inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 16, 5 }));
  set_short( "Corridor - x29y16z5" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y16z5.c",
  "south" : DIR+"/rooms/x29y15z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
