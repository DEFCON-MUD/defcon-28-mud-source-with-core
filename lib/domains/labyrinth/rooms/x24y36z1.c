inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 36, 1 }));
  set_short( "Passage - x24y36z1" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y36z1.c",
  "east" : DIR+"/rooms/x25y36z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
