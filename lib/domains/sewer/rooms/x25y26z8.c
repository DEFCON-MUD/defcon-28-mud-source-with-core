inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 26, 8 }));
  set_short( "Passage - x25y26z8" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y26z8.c",
  "north" : DIR+"/rooms/x25y27z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
