inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 38, 2 }));
  set_short( "Corridor - x7y38z2" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y39z2.c",
  "south" : DIR+"/rooms/x7y37z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
