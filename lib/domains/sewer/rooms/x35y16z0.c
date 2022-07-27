inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 16, 0 }));
  set_short( "Passage - x35y16z0" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y16z0.c",
  "north" : DIR+"/rooms/x35y17z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
