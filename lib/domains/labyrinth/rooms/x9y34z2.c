inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 34, 2 }));
  set_short( "Passage - x9y34z2" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y34z2.c",
  "south" : DIR+"/rooms/x9y33z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
