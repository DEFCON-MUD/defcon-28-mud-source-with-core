inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 19, 9 }));
  set_short( "Passage - x13y19z9" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y20z9.c",
  "south" : DIR+"/rooms/x13y18z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
