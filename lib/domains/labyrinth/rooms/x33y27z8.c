inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 27, 8 }));
  set_short( "Corridor - x33y27z8" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y28z8.c",
  "south" : DIR+"/rooms/x33y26z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
