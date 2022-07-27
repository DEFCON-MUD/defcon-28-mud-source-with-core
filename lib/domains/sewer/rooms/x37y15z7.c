inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 15, 7 }));
  set_short( "Passage - x37y15z7" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y16z7.c",
  "south" : DIR+"/rooms/x37y14z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
