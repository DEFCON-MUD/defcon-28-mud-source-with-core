inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 28, 6 }));
  set_short( "Corridor - x23y28z6" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y29z6.c",
  "south" : DIR+"/rooms/x23y27z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
