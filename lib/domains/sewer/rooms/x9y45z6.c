inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 45, 6 }));
  set_short( "Passage - x9y45z6" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y46z6.c",
  "south" : DIR+"/rooms/x9y44z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
