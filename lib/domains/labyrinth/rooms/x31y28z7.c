inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 28, 7 }));
  set_short( "Corridor - x31y28z7" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y28z7.c",
  "east" : DIR+"/rooms/x32y28z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
