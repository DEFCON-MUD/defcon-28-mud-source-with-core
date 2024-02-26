inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 8, 6 }));
  set_short( "Corridor - x11y8z6" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y8z6.c",
  "east" : DIR+"/rooms/x12y8z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
