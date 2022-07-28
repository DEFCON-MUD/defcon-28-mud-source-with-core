inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 41, 4 }));
  set_short( "Hallway - x51y41z4" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y42z4.c",
  "south" : DIR+"/rooms/x51y40z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
