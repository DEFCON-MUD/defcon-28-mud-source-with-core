inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 28, 8 }));
  set_short( "Corridor - x13y28z8" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y28z8.c",
  "north" : DIR+"/rooms/x13y29z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
