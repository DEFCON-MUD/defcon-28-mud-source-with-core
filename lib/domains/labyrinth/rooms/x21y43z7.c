inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 43, 7 }));
  set_short( "Hallway - x21y43z7" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y44z7.c",
  "south" : DIR+"/rooms/x21y42z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
