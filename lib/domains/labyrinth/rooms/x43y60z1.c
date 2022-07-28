inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 60, 1 }));
  set_short( "Passage - x43y60z1" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y60z1.c",
  "north" : DIR+"/rooms/x43y61z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
