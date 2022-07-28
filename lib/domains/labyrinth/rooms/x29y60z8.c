inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 60, 8 }));
  set_short( "Hallway - x29y60z8" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y60z8.c",
  "north" : DIR+"/rooms/x29y61z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
