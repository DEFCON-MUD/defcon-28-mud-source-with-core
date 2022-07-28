inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 16, 4 }));
  set_short( "Corridor - x1y16z4" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y17z4.c",
  "south" : DIR+"/rooms/x1y15z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
