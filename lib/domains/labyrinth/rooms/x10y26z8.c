inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 26, 8 }));
  set_short( "Passage - x10y26z8" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y26z8.c",
  "east" : DIR+"/rooms/x11y26z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
