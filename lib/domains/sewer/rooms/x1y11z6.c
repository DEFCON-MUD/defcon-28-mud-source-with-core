inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 11, 6 }));
  set_short( "Corridor - x1y11z6" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y12z6.c",
  "south" : DIR+"/rooms/x1y10z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
