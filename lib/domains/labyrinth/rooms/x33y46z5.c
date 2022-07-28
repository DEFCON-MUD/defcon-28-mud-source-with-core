inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 46, 5 }));
  set_short( "Corridor - x33y46z5" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y46z5.c",
  "north" : DIR+"/rooms/x33y47z5.c",
  "south" : DIR+"/rooms/x33y45z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
