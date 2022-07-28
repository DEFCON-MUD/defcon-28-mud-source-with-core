inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 37, 0 }));
  set_short( "Passage - x7y37z0" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y38z0.c",
  "south" : DIR+"/rooms/x7y36z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
