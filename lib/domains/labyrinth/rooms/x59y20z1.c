inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 20, 1 }));
  set_short( "Passage - x59y20z1" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y20z1.c",
  "north" : DIR+"/rooms/x59y21z1.c",
  "south" : DIR+"/rooms/x59y19z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
