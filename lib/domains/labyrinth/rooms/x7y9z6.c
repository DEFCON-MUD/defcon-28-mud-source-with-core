inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 9, 6 }));
  set_short( "Passage - x7y9z6" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y10z6.c",
  "south" : DIR+"/rooms/x7y8z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
