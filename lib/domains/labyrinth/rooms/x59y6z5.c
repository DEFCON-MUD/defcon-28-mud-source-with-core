inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 6, 5 }));
  set_short( "Corridor - x59y6z5" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y6z5.c",
  "north" : DIR+"/rooms/x59y7z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
