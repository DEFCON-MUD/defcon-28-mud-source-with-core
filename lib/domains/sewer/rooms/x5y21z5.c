inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 21, 5 }));
  set_short( "Passage - x5y21z5" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y22z5.c",
  "south" : DIR+"/rooms/x5y20z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
