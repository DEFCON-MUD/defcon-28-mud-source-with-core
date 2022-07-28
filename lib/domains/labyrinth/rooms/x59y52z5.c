inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 52, 5 }));
  set_short( "Corridor - x59y52z5" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y52z5.c",
  "north" : DIR+"/rooms/x59y53z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
