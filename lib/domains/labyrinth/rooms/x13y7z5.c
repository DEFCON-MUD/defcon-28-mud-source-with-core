inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 7, 5 }));
  set_short( "Passage - x13y7z5" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y8z5.c",
  "south" : DIR+"/rooms/x13y6z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
