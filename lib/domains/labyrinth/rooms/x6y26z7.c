inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 26, 7 }));
  set_short( "Corridor - x6y26z7" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y26z7.c",
  "east" : DIR+"/rooms/x7y26z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
