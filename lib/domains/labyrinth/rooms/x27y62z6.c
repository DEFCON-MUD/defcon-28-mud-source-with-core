inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 62, 6 }));
  set_short( "Passage - x27y62z6" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y62z6.c",
  "east" : DIR+"/rooms/x28y62z6.c",
  "south" : DIR+"/rooms/x27y61z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
