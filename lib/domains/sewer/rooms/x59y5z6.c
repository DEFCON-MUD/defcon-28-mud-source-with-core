inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 5, 6 }));
  set_short( "Hallway - x59y5z6" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y6z6.c",
  "south" : DIR+"/rooms/x59y4z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
