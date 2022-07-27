inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 28, 7 }));
  set_short( "Passage - x13y28z7" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y29z7.c",
  "south" : DIR+"/rooms/x13y27z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
