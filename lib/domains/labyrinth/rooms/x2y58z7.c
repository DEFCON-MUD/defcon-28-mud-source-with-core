inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 58, 7 }));
  set_short( "Passage - x2y58z7" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y58z7.c",
  "east" : DIR+"/rooms/x3y58z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
