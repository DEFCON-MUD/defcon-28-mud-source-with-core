inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 6, 6 }));
  set_short( "Corridor - x51y6z6" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y7z6.c",
  "south" : DIR+"/rooms/x51y5z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
