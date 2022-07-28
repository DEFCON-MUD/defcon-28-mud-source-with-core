inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 44, 7 }));
  set_short( "Passage - x26y44z7" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y44z7.c",
  "east" : DIR+"/rooms/x27y44z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
