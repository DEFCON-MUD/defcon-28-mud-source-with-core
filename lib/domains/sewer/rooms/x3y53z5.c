inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 53, 5 }));
  set_short( "Hallway - x3y53z5" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y54z5.c",
  "south" : DIR+"/rooms/x3y52z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
