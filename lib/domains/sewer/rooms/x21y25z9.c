inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 25, 9 }));
  set_short( "Passage - x21y25z9" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y26z9.c",
  "south" : DIR+"/rooms/x21y24z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
