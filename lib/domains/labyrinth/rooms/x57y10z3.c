inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 10, 3 }));
  set_short( "Passage - x57y10z3" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y10z3.c",
  "south" : DIR+"/rooms/x57y9z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
