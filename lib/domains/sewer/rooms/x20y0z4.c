inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 0, 4 }));
  set_short( "Hallway - x20y0z4" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y0z4.c",
  "east" : DIR+"/rooms/x21y0z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
