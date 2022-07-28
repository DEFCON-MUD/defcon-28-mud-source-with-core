inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 62, 3 }));
  set_short( "Passage - x24y62z3" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y62z3.c",
  "east" : DIR+"/rooms/x25y62z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
