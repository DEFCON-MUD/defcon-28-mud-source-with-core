inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 50, 5 }));
  set_short( "Passage - x40y50z5" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y50z5.c",
  "east" : DIR+"/rooms/x41y50z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
