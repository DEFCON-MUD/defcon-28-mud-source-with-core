inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 45, 7 }));
  set_short( "Corridor - x39y45z7" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y46z7.c",
  "south" : DIR+"/rooms/x39y44z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
