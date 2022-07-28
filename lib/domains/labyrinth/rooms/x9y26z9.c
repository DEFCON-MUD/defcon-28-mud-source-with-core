inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 26, 9 }));
  set_short( "Hallway - x9y26z9" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y26z9.c",
  "north" : DIR+"/rooms/x9y27z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
