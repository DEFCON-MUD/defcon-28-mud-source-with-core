inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 24, 4 }));
  set_short( "Corridor - x59y24z4" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y24z4.c",
  "north" : DIR+"/rooms/x59y25z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
