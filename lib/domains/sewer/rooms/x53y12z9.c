inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 12, 9 }));
  set_short( "Corridor - x53y12z9" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y13z9.c",
  "south" : DIR+"/rooms/x53y11z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
