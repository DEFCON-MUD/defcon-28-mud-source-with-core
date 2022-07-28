inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 42, 8 }));
  set_short( "Corridor - x42y42z8" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y42z8.c",
  "east" : DIR+"/rooms/x43y42z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
