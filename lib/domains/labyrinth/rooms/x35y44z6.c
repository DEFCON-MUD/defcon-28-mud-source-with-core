inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 44, 6 }));
  set_short( "Passage - x35y44z6" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y44z6.c",
  "south" : DIR+"/rooms/x35y43z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
