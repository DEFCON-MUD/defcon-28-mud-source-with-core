inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 7, 9 }));
  set_short( "Corridor - x9y7z9" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y8z9.c",
  "south" : DIR+"/rooms/x9y6z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
