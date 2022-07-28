inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 1, 4 }));
  set_short( "Passage - x1y1z4" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y2z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north.%^RESET%^");
}
