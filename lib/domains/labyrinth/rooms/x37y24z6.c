inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 24, 6 }));
  set_short( "Corridor - x37y24z6" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y25z6.c",
  "south" : DIR+"/rooms/x37y23z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
