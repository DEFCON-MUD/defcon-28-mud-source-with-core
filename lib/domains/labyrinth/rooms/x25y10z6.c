inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 10, 6 }));
  set_short( "Corridor - x25y10z6" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y10z6.c",
  "south" : DIR+"/rooms/x25y9z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
