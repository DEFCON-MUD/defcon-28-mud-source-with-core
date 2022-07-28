inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 30, 1 }));
  set_short( "Corridor - x37y30z1" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y30z1.c",
  "north" : DIR+"/rooms/x37y31z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
