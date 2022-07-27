inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 46, 2 }));
  set_short( "Passage - x37y46z2" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y47z2.c",
  "south" : DIR+"/rooms/x37y45z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
