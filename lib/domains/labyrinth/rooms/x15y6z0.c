inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 6, 0 }));
  set_short( "Corridor - x15y6z0" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y7z0.c",
  "south" : DIR+"/rooms/x15y5z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
