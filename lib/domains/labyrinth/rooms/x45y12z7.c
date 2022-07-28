inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 12, 7 }));
  set_short( "Hallway - x45y12z7" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y12z7.c",
  "north" : DIR+"/rooms/x45y13z7.c",
  "south" : DIR+"/rooms/x45y11z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
