inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 22, 8 }));
  set_short( "Passage - x46y22z8" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y22z8.c",
  "east" : DIR+"/rooms/x47y22z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
