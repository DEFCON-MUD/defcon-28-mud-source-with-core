inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 18, 5 }));
  set_short( "Hallway - x9y18z5" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y19z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north.%^RESET%^");
}
