inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 15, 1 }));
  set_short( "Corridor - x47y15z1" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y16z1.c",
  "south" : DIR+"/rooms/x47y14z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
