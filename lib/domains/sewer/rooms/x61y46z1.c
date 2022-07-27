inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 46, 1 }));
  set_short( "Corridor - x61y46z1" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y46z1.c",
  "south" : DIR+"/rooms/x61y45z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
