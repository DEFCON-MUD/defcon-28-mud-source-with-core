inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 56, 8 }));
  set_short( "Hallway - x45y56z8" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y56z8.c",
  "north" : DIR+"/rooms/x45y57z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
