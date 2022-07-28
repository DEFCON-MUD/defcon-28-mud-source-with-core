inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 20, 4 }));
  set_short( "Hallway - x41y20z4" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y21z4.c",
  "south" : DIR+"/rooms/x41y19z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
