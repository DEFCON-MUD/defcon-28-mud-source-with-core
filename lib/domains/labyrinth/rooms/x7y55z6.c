inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 55, 6 }));
  set_short( "Corridor - x7y55z6" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y56z6.c",
  "south" : DIR+"/rooms/x7y54z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
