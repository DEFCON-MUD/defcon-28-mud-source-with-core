inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 60, 8 }));
  set_short( "Corridor - x39y60z8" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y60z8.c",
  "north" : DIR+"/rooms/x39y61z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
