inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 27, 6 }));
  set_short( "Passage - x35y27z6" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y28z6.c",
  "south" : DIR+"/rooms/x35y26z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
