inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 37, 0 }));
  set_short( "Passage - x53y37z0" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y38z0.c",
  "south" : DIR+"/rooms/x53y36z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
