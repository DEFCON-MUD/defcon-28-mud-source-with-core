inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 43, 7 }));
  set_short( "Passage - x13y43z7" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y44z7.c",
  "south" : DIR+"/rooms/x13y42z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
