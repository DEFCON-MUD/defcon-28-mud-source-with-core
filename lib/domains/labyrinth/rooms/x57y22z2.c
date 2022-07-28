inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 22, 2 }));
  set_short( "Corridor - x57y22z2" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y22z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
