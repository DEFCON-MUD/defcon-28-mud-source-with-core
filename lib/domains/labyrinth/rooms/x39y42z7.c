inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 42, 7 }));
  set_short( "Passage - x39y42z7" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y42z7.c",
  "north" : DIR+"/rooms/x39y43z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
