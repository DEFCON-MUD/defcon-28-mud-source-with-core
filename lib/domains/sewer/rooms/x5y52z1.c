inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 52, 1 }));
  set_short( "Hallway - x5y52z1" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y52z1.c",
  "north" : DIR+"/rooms/x5y53z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
