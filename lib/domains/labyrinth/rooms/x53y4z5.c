inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 4, 5 }));
  set_short( "Passage - x53y4z5" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y4z5.c",
  "south" : DIR+"/rooms/x53y3z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
