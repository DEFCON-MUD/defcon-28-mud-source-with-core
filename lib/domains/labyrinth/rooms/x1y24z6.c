inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 24, 6 }));
  set_short( "Passage - x1y24z6" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y25z6.c",
  "south" : DIR+"/rooms/x1y23z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
