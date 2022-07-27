inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 38, 8 }));
  set_short( "Passage - x16y38z8" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y38z8.c",
  "east" : DIR+"/rooms/x17y38z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
