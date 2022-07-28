inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 6, 8 }));
  set_short( "Passage - x50y6z8" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y6z8.c",
  "east" : DIR+"/rooms/x51y6z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
