inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 30, 1 }));
  set_short( "Passage - x43y30z1" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y31z1.c",
  "south" : DIR+"/rooms/x43y29z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
