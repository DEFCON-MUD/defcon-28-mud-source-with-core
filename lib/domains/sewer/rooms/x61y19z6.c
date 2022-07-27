inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 19, 6 }));
  set_short( "Corridor - x61y19z6" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y20z6.c",
  "south" : DIR+"/rooms/x61y18z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
