inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 33, 6 }));
  set_short( "Hallway - x9y33z6" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y34z6.c",
  "south" : DIR+"/rooms/x9y32z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
