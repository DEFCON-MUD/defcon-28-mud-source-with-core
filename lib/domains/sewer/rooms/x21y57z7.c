inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 57, 7 }));
  set_short( "Passage - x21y57z7" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y58z7.c",
  "south" : DIR+"/rooms/x21y56z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
