inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 18, 0 }));
  set_short( "Corridor - x22y18z0" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y18z0.c",
  "east" : DIR+"/rooms/x23y18z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
