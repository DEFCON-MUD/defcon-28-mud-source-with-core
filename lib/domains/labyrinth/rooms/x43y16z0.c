inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 16, 0 }));
  set_short( "Passage - x43y16z0" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y16z0.c",
  "east" : DIR+"/rooms/x44y16z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
