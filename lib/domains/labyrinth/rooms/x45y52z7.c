inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 52, 7 }));
  set_short( "Corridor - x45y52z7" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y52z7.c",
  "north" : DIR+"/rooms/x45y53z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
