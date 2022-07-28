inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 10, 0 }));
  set_short( "Passage - x37y10z0" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y10z0.c",
  "east" : DIR+"/rooms/x38y10z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
