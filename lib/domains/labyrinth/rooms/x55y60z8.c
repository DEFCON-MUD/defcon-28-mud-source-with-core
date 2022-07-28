inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 60, 8 }));
  set_short( "Corridor - x55y60z8" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y60z8.c",
  "north" : DIR+"/rooms/x55y61z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
