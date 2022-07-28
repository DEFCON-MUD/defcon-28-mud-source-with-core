inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 14, 3 }));
  set_short( "Passage - x44y14z3" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y14z3.c",
  "east" : DIR+"/rooms/x45y14z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
