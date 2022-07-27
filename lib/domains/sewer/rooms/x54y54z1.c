inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 54, 1 }));
  set_short( "Corridor - x54y54z1" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y54z1.c",
  "east" : DIR+"/rooms/x55y54z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
