inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 60, 2 }));
  set_short( "Hallway - x37y60z2" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y61z2.c",
  "south" : DIR+"/rooms/x37y59z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
