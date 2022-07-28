inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 10, 9 }));
  set_short( "Corridor - x33y10z9" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y10z9.c",
  "north" : DIR+"/rooms/x33y11z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
