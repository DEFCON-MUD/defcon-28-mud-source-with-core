inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 52, 4 }));
  set_short( "Passage - x25y52z4" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y52z4.c",
  "north" : DIR+"/rooms/x25y53z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
