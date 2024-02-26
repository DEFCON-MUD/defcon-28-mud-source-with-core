inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 62, 4 }));
  set_short( "Corridor - x5y62z4" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y62z4.c",
  "south" : DIR+"/rooms/x5y61z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
