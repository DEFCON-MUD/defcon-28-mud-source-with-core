inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 38, 4 }));
  set_short( "Passage - x13y38z4" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y38z4.c",
  "east" : DIR+"/rooms/x14y38z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
