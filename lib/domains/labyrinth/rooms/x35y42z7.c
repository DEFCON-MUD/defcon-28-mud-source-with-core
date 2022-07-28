inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 42, 7 }));
  set_short( "Corridor - x35y42z7" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y43z7.c",
  "south" : DIR+"/rooms/x35y41z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
