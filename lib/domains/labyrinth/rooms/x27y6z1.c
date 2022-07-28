inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 6, 1 }));
  set_short( "Corridor - x27y6z1" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y6z1.c",
  "north" : DIR+"/rooms/x27y7z1.c",
  "south" : DIR+"/rooms/x27y5z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
