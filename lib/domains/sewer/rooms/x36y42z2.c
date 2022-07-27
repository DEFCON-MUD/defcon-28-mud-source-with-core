inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 42, 2 }));
  set_short( "Hallway - x36y42z2" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y42z2.c",
  "east" : DIR+"/rooms/x37y42z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
