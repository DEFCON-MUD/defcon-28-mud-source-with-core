inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 46, 8 }));
  set_short( "Passage - x7y46z8" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y46z8.c",
  "south" : DIR+"/rooms/x7y45z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
