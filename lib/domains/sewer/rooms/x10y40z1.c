inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 40, 1 }));
  set_short( "Corridor - x10y40z1" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y40z1.c",
  "east" : DIR+"/rooms/x11y40z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
