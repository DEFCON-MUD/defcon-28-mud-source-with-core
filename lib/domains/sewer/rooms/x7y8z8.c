inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 8, 8 }));
  set_short( "Hallway - x7y8z8" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y8z8.c",
  "east" : DIR+"/rooms/x8y8z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
