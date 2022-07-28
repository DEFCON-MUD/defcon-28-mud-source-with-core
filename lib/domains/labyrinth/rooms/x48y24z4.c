inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 24, 4 }));
  set_short( "Passage - x48y24z4" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y24z4.c",
  "east" : DIR+"/rooms/x49y24z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
