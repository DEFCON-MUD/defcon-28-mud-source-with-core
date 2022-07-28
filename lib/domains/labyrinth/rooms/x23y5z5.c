inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 5, 5 }));
  set_short( "Passage - x23y5z5" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y6z5.c",
  "south" : DIR+"/rooms/x23y4z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
