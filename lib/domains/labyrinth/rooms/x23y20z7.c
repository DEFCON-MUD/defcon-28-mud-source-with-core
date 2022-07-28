inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 20, 7 }));
  set_short( "Corridor - x23y20z7" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y21z7.c",
  "south" : DIR+"/rooms/x23y19z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
