inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 56, 6 }));
  set_short( "Passage - x1y56z6" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y56z6.c",
  "north" : DIR+"/rooms/x1y57z6.c",
  "south" : DIR+"/rooms/x1y55z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
