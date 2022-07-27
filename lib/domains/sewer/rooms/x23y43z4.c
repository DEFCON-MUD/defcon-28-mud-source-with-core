inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 43, 4 }));
  set_short( "Corridor - x23y43z4" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y44z4.c",
  "south" : DIR+"/rooms/x23y42z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
