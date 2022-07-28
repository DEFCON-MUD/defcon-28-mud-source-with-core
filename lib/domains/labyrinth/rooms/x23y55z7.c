inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 55, 7 }));
  set_short( "Corridor - x23y55z7" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y56z7.c",
  "south" : DIR+"/rooms/x23y54z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
