inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 36, 8 }));
  set_short( "Passage - x19y36z8" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y36z8.c",
  "east" : DIR+"/rooms/x20y36z8.c",
  "south" : DIR+"/rooms/x19y35z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
