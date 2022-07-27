inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 22, 2 }));
  set_short( "Corridor - x41y22z2" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y22z2.c",
  "south" : DIR+"/rooms/x41y21z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
