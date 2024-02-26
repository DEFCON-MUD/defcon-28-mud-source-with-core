inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 14, 5 }));
  set_short( "Hallway - x7y14z5" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "south" : DIR+"/rooms/x7y13z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
