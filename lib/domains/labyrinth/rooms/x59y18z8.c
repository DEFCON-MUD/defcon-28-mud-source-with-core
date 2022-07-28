inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 18, 8 }));
  set_short( "Corridor - x59y18z8" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y18z8.c",
  "north" : DIR+"/rooms/x59y19z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
