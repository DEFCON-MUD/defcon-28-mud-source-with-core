inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 62, 7 }));
  set_short( "Corridor - x48y62z7" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y62z7.c",
  "east" : DIR+"/rooms/x49y62z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
