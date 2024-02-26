inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 13, 6 }));
  set_short( "Passage - x11y13z6" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y14z6.c",
  "south" : DIR+"/rooms/x11y12z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
