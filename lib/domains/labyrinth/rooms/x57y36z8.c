inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 36, 8 }));
  set_short( "Hallway - x57y36z8" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y36z8.c",
  "north" : DIR+"/rooms/x57y37z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
