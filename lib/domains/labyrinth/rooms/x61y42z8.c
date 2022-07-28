inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 42, 8 }));
  set_short( "Corridor - x61y42z8" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y43z8.c",
  "south" : DIR+"/rooms/x61y41z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
