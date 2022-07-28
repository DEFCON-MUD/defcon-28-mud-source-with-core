inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 41, 8 }));
  set_short( "Hallway - x43y41z8" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y42z8.c",
  "south" : DIR+"/rooms/x43y40z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
