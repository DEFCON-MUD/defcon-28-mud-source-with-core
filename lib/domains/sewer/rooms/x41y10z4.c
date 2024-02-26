inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 10, 4 }));
  set_short( "Corridor - x41y10z4" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y10z4.c",
  "east" : DIR+"/rooms/x42y10z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
