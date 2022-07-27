inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 41, 5 }));
  set_short( "Corridor - x37y41z5" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y42z5.c",
  "south" : DIR+"/rooms/x37y40z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
