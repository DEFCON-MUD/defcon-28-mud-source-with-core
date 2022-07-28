inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 58, 5 }));
  set_short( "Passage - x5y58z5" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y59z5.c",
  "south" : DIR+"/rooms/x5y57z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
