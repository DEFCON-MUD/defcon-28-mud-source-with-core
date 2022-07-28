inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 42, 4 }));
  set_short( "Hallway - x57y42z4" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y42z4.c",
  "east" : DIR+"/rooms/x58y42z4.c",
  "north" : DIR+"/rooms/x57y43z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
