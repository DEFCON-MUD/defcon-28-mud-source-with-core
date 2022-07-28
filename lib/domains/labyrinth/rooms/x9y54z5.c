inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 54, 5 }));
  set_short( "Corridor - x9y54z5" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y54z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
