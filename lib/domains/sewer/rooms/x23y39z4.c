inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 39, 4 }));
  set_short( "Corridor - x23y39z4" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y40z4.c",
  "south" : DIR+"/rooms/x23y38z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
