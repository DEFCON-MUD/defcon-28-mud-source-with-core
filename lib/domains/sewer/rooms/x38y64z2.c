inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 64, 2 }));
  set_short( "Corridor - x38y64z2" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y64z2.c",
  "east" : DIR+"/rooms/x39y64z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
