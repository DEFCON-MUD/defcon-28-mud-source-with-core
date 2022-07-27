inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 42, 6 }));
  set_short( "Corridor - x31y42z6" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y43z6.c",
  "south" : DIR+"/rooms/x31y41z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
