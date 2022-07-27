inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 22, 1 }));
  set_short( "Passage - x24y22z1" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y22z1.c",
  "east" : DIR+"/rooms/x25y22z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
