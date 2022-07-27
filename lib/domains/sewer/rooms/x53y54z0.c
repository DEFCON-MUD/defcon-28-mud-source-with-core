inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 54, 0 }));
  set_short( "Corridor - x53y54z0" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y55z0.c",
  "south" : DIR+"/rooms/x53y53z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
