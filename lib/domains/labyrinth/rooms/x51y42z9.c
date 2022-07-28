inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 42, 9 }));
  set_short( "Passage - x51y42z9" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y42z9.c",
  "south" : DIR+"/rooms/x51y41z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
