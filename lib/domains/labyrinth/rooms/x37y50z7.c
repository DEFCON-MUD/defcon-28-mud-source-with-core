inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 50, 7 }));
  set_short( "Corridor - x37y50z7" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y50z7.c",
  "south" : DIR+"/rooms/x37y49z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
