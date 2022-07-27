inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 10, 6 }));
  set_short( "Corridor - x17y10z6" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y10z6.c",
  "north" : DIR+"/rooms/x17y11z6.c",
  "south" : DIR+"/rooms/x17y9z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
