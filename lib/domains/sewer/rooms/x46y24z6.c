inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 24, 6 }));
  set_short( "Passage - x46y24z6" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y24z6.c",
  "east" : DIR+"/rooms/x47y24z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
