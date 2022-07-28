inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 11, 1 }));
  set_short( "Passage - x5y11z1" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y12z1.c",
  "south" : DIR+"/rooms/x5y10z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
