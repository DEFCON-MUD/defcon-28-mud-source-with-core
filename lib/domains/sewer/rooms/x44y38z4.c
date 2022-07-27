inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 38, 4 }));
  set_short( "Passage - x44y38z4" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y38z4.c",
  "east" : DIR+"/rooms/x45y38z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
