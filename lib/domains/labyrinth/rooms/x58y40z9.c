inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 40, 9 }));
  set_short( "Corridor - x58y40z9" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y40z9.c",
  "east" : DIR+"/rooms/x59y40z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
