inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 6, 2 }));
  set_short( "Hallway - x41y6z2" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y6z2.c",
  "north" : DIR+"/rooms/x41y7z2.c",
  "south" : DIR+"/rooms/x41y5z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
