inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 40, 3 }));
  set_short( "Hallway - x37y40z3" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y40z3.c",
  "east" : DIR+"/rooms/x38y40z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
