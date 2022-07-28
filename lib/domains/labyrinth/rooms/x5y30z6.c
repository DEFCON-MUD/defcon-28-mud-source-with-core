inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 30, 6 }));
  set_short( "Corridor - x5y30z6" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y30z6.c",
  "north" : DIR+"/rooms/x5y31z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
