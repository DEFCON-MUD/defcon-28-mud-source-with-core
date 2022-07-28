inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 44, 8 }));
  set_short( "Corridor - x49y44z8" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y44z8.c",
  "north" : DIR+"/rooms/x49y45z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
