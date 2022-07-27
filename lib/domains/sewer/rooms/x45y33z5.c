inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 33, 5 }));
  set_short( "Corridor - x45y33z5" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y34z5.c",
  "south" : DIR+"/rooms/x45y32z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
