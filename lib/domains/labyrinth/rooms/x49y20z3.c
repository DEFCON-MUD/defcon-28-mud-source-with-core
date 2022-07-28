inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 20, 3 }));
  set_short( "Passage - x49y20z3" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y20z3.c",
  "east" : DIR+"/rooms/x50y20z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
