inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 12, 2 }));
  set_short( "Corridor - x39y12z2" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y12z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
