inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 7, 3 }));
  set_short( "Corridor - x25y7z3" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y8z3.c",
  "south" : DIR+"/rooms/x25y6z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
