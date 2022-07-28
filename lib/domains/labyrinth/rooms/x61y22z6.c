inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 22, 6 }));
  set_short( "Passage - x61y22z6" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y23z6.c",
  "south" : DIR+"/rooms/x61y21z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
