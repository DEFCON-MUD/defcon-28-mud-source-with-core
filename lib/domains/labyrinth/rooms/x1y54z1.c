inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 54, 1 }));
  set_short( "Hallway - x1y54z1" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y54z1.c",
  "north" : DIR+"/rooms/x1y55z1.c",
  "south" : DIR+"/rooms/x1y53z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
