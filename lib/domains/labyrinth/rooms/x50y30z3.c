inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 30, 3 }));
  set_short( "Hallway - x50y30z3" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y30z3.c",
  "east" : DIR+"/rooms/x51y30z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
