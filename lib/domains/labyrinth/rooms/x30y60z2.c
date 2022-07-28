inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 60, 2 }));
  set_short( "Hallway - x30y60z2" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y60z2.c",
  "east" : DIR+"/rooms/x31y60z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
