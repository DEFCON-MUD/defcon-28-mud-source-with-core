inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 24, 7 }));
  set_short( "Hallway - x42y24z7" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y24z7.c",
  "east" : DIR+"/rooms/x43y24z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
