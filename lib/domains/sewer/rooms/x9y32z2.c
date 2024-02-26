inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 32, 2 }));
  set_short( "Corridor - x9y32z2" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y33z2.c",
  "south" : DIR+"/rooms/x9y31z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
