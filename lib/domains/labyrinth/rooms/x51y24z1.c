inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 24, 1 }));
  set_short( "Passage - x51y24z1" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y25z1.c",
  "south" : DIR+"/rooms/x51y23z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
