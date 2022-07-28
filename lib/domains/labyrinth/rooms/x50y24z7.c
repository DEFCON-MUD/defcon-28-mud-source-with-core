inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 24, 7 }));
  set_short( "Passage - x50y24z7" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y24z7.c",
  "east" : DIR+"/rooms/x51y24z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
