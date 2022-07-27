inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 62, 4 }));
  set_short( "Corridor - x38y62z4" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y62z4.c",
  "east" : DIR+"/rooms/x39y62z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
