inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 62, 64, 4 }));
  set_short( "Corridor - x62y64z4" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x61y64z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
