inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 38, 3 }));
  set_short( "Passage - x57y38z3" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y38z3.c",
  "south" : DIR+"/rooms/x57y37z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
