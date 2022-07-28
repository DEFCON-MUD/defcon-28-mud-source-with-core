inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 2, 6 }));
  set_short( "Corridor - x57y2z6" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y2z6.c",
  "east" : DIR+"/rooms/x58y2z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
