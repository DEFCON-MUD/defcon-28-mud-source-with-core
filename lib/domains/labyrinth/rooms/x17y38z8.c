inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 38, 8 }));
  set_short( "Corridor - x17y38z8" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y38z8.c",
  "east" : DIR+"/rooms/x18y38z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
