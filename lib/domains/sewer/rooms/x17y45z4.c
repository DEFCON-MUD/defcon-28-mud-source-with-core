inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 45, 4 }));
  set_short( "Corridor - x17y45z4" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y46z4.c",
  "south" : DIR+"/rooms/x17y44z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
