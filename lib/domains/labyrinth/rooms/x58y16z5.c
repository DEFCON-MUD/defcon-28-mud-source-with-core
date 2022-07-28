inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 16, 5 }));
  set_short( "Passage - x58y16z5" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y16z5.c",
  "east" : DIR+"/rooms/x59y16z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
