inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 40, 5 }));
  set_short( "Passage - x18y40z5" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y40z5.c",
  "east" : DIR+"/rooms/x19y40z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
