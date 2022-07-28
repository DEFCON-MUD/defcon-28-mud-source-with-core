inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 10, 5 }));
  set_short( "Passage - x61y10z5" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y10z5.c",
  "north" : DIR+"/rooms/x61y11z5.c",
  "south" : DIR+"/rooms/x61y9z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
