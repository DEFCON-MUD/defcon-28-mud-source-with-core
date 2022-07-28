inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 12, 7 }));
  set_short( "Corridor - x51y12z7" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y12z7.c",
  "north" : DIR+"/rooms/x51y13z7.c",
  "south" : DIR+"/rooms/x51y11z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
