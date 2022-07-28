inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 8, 9 }));
  set_short( "Hallway - x40y8z9" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y8z9.c",
  "east" : DIR+"/rooms/x41y8z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
