inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 64, 6 }));
  set_short( "Corridor - x15y64z6" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y64z6.c",
  "east" : DIR+"/rooms/x16y64z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
