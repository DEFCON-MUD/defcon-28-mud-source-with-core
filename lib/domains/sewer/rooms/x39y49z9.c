inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 49, 9 }));
  set_short( "Passage - x39y49z9" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y50z9.c",
  "south" : DIR+"/rooms/x39y48z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
