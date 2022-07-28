inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 38, 7 }));
  set_short( "Passage - x6y38z7" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y38z7.c",
  "east" : DIR+"/rooms/x7y38z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
