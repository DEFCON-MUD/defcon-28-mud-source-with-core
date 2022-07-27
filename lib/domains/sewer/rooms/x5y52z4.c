inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 52, 4 }));
  set_short( "Corridor - x5y52z4" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y52z4.c",
  "south" : DIR+"/rooms/x5y51z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
