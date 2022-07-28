inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 41, 1 }));
  set_short( "Passage - x9y41z1" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y42z1.c",
  "south" : DIR+"/rooms/x9y40z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
