inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 20, 6 }));
  set_short( "Hallway - x59y20z6" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y21z6.c",
  "south" : DIR+"/rooms/x59y19z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
