inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 20, 5 }));
  set_short( "Corridor - x23y20z5" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "south" : DIR+"/rooms/x23y19z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
