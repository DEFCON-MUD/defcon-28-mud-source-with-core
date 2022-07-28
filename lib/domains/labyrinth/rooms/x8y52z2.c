inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 52, 2 }));
  set_short( "Passage - x8y52z2" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y52z2.c",
  "east" : DIR+"/rooms/x9y52z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
