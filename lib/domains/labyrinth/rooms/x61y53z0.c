inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 53, 0 }));
  set_short( "Corridor - x61y53z0" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y54z0.c",
  "south" : DIR+"/rooms/x61y52z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
