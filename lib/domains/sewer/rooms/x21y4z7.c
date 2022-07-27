inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 4, 7 }));
  set_short( "Passage - x21y4z7" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y4z7.c",
  "north" : DIR+"/rooms/x21y5z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
