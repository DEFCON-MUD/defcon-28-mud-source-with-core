inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 39, 7 }));
  set_short( "Passage - x51y39z7" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y40z7.c",
  "south" : DIR+"/rooms/x51y38z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
