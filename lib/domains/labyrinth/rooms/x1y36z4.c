inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 36, 4 }));
  set_short( "Hallway - x1y36z4" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y37z4.c",
  "south" : DIR+"/rooms/x1y35z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
