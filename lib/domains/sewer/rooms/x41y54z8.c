inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 54, 8 }));
  set_short( "Hallway - x41y54z8" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y54z8.c",
  "east" : DIR+"/rooms/x42y54z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
