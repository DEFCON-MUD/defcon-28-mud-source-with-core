inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 2, 4 }));
  set_short( "Passage - x8y2z4" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y2z4.c",
  "east" : DIR+"/rooms/x9y2z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
