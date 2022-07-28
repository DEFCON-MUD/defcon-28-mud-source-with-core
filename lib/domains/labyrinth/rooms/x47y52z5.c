inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 52, 5 }));
  set_short( "Passage - x47y52z5" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y52z5.c",
  "north" : DIR+"/rooms/x47y53z5.c",
  "south" : DIR+"/rooms/x47y51z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
