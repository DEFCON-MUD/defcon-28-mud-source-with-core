inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 22, 5 }));
  set_short( "Passage - x22y22z5" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y22z5.c",
  "east" : DIR+"/rooms/x23y22z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
