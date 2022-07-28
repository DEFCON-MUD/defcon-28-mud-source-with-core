inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 24, 8 }));
  set_short( "Passage - x39y24z8" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y24z8.c",
  "north" : DIR+"/rooms/x39y25z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
