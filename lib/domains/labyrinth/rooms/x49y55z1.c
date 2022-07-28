inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 55, 1 }));
  set_short( "Passage - x49y55z1" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y56z1.c",
  "south" : DIR+"/rooms/x49y54z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
