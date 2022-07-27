inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 40, 5 }));
  set_short( "Corridor - x35y40z5" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y41z5.c",
  "south" : DIR+"/rooms/x35y39z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
