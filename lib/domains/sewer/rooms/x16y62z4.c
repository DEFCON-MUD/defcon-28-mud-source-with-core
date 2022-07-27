inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 62, 4 }));
  set_short( "Hallway - x16y62z4" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y62z4.c",
  "east" : DIR+"/rooms/x17y62z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
