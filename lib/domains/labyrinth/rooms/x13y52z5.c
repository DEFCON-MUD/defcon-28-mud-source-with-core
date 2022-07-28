inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 52, 5 }));
  set_short( "Hallway - x13y52z5" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y52z5.c",
  "south" : DIR+"/rooms/x13y51z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
