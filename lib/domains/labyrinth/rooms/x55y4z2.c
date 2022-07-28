inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 4, 2 }));
  set_short( "Corridor - x55y4z2" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y4z2.c",
  "south" : DIR+"/rooms/x55y3z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
