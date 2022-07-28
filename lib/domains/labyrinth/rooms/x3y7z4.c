inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 7, 4 }));
  set_short( "Corridor - x3y7z4" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y8z4.c",
  "south" : DIR+"/rooms/x3y6z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
