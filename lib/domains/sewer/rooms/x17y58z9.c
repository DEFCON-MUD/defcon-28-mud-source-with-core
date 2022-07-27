inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 58, 9 }));
  set_short( "Hallway - x17y58z9" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y59z9.c",
  "south" : DIR+"/rooms/x17y57z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
