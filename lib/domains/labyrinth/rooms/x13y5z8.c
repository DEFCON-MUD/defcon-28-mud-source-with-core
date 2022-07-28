inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 5, 8 }));
  set_short( "Passage - x13y5z8" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y6z8.c",
  "south" : DIR+"/rooms/x13y4z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
