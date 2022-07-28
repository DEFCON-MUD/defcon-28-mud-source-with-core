inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 42, 6 }));
  set_short( "Hallway - x27y42z6" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y42z6.c",
  "north" : DIR+"/rooms/x27y43z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
