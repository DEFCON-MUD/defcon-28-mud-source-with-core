inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 3, 5 }));
  set_short( "Corridor - x3y3z5" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y4z5.c",
  "south" : DIR+"/rooms/x3y2z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
