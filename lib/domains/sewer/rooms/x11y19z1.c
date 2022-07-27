inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 19, 1 }));
  set_short( "Passage - x11y19z1" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y20z1.c",
  "south" : DIR+"/rooms/x11y18z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
