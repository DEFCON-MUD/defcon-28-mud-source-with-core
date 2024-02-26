inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 9, 9 }));
  set_short( "Corridor - x17y9z9" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y10z9.c",
  "south" : DIR+"/rooms/x17y8z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
