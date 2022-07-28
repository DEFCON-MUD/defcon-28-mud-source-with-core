inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 34, 8 }));
  set_short( "Passage - x22y34z8" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y34z8.c",
  "east" : DIR+"/rooms/x23y34z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
