inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 55, 4 }));
  set_short( "Corridor - x33y55z4" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y56z4.c",
  "south" : DIR+"/rooms/x33y54z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
