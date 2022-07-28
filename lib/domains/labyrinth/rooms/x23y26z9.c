inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 26, 9 }));
  set_short( "Passage - x23y26z9" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y27z9.c",
  "south" : DIR+"/rooms/x23y25z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
