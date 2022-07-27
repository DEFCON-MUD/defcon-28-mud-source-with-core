inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 10, 7 }));
  set_short( "Hallway - x51y10z7" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y11z7.c",
  "south" : DIR+"/rooms/x51y9z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
