inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 44, 8 }));
  set_short( "Hallway - x42y44z8" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y44z8.c",
  "east" : DIR+"/rooms/x43y44z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
