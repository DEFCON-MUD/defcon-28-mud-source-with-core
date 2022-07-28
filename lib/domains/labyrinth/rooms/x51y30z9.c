inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 30, 9 }));
  set_short( "Corridor - x51y30z9" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y30z9.c",
  "north" : DIR+"/rooms/x51y31z9.c",
  "south" : DIR+"/rooms/x51y29z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
