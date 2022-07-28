inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 36, 8 }));
  set_short( "Passage - x33y36z8" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y36z8.c",
  "south" : DIR+"/rooms/x33y35z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
