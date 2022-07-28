inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 51, 0 }));
  set_short( "Corridor - x13y51z0" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y52z0.c",
  "south" : DIR+"/rooms/x13y50z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
