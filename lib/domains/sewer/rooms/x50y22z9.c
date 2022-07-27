inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 22, 9 }));
  set_short( "Passage - x50y22z9" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y22z9.c",
  "east" : DIR+"/rooms/x51y22z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
