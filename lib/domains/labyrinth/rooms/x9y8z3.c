inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 8, 3 }));
  set_short( "Corridor - x9y8z3" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y9z3.c",
  "south" : DIR+"/rooms/x9y7z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
