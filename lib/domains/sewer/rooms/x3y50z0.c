inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 50, 0 }));
  set_short( "Corridor - x3y50z0" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y50z0.c",
  "east" : DIR+"/rooms/x4y50z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
