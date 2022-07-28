inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 20, 2 }));
  set_short( "Passage - x18y20z2" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y20z2.c",
  "east" : DIR+"/rooms/x19y20z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
