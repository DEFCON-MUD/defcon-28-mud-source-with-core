inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 0, 2 }));
  set_short( "Corridor - x12y0z2" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y0z2.c",
  "east" : DIR+"/rooms/x13y0z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
