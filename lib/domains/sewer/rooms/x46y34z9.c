inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 34, 9 }));
  set_short( "Passage - x46y34z9" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y34z9.c",
  "east" : DIR+"/rooms/x47y34z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
