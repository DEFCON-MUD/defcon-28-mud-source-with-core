inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 48, 5 }));
  set_short( "Passage - x25y48z5" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y49z5.c",
  "south" : DIR+"/rooms/x25y47z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
