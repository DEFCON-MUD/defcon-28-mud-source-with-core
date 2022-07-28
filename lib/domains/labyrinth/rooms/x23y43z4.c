inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 43, 4 }));
  set_short( "Corridor - x23y43z4" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y44z4.c",
  "south" : DIR+"/rooms/x23y42z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
