inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 58, 6 }));
  set_short( "Passage - x43y58z6" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y58z6.c",
  "east" : DIR+"/rooms/x44y58z6.c",
  "north" : DIR+"/rooms/x43y59z6.c",
  "south" : DIR+"/rooms/x43y57z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
