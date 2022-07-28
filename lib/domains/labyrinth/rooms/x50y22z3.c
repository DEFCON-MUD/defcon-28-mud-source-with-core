inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 22, 3 }));
  set_short( "Passage - x50y22z3" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y22z3.c",
  "east" : DIR+"/rooms/x51y22z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
