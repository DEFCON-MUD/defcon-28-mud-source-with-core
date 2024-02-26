inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 34, 0 }));
  set_short( "Corridor - x51y34z0" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y34z0.c",
  "north" : DIR+"/rooms/x51y35z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
