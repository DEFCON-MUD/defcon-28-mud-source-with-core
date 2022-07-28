inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 40, 5 }));
  set_short( "Hallway - x55y40z5" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y40z5.c",
  "north" : DIR+"/rooms/x55y41z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
