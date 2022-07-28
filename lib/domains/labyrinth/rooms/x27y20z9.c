inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 20, 9 }));
  set_short( "Hallway - x27y20z9" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y20z9.c",
  "north" : DIR+"/rooms/x27y21z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
