inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 36, 5 }));
  set_short( "Corridor - x27y36z5" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "south" : DIR+"/rooms/x27y35z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
