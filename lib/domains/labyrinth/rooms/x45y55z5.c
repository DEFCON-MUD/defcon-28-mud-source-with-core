inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 55, 5 }));
  set_short( "Hallway - x45y55z5" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y56z5.c",
  "south" : DIR+"/rooms/x45y54z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
