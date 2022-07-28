inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 26, 1 }));
  set_short( "Passage - x33y26z1" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y27z1.c",
  "south" : DIR+"/rooms/x33y25z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
