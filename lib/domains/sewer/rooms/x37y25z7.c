inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 25, 7 }));
  set_short( "Hallway - x37y25z7" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y26z7.c",
  "south" : DIR+"/rooms/x37y24z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
