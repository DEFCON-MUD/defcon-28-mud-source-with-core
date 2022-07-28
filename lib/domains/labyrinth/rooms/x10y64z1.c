inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 64, 1 }));
  set_short( "Passage - x10y64z1" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y64z1.c",
  "east" : DIR+"/rooms/x11y64z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
