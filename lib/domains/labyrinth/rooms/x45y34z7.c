inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 34, 7 }));
  set_short( "Passage - x45y34z7" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y34z7.c",
  "north" : DIR+"/rooms/x45y35z7.c",
  "south" : DIR+"/rooms/x45y33z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
