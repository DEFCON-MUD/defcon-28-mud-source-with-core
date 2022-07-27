inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 54, 5 }));
  set_short( "Hallway - x33y54z5" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y55z5.c",
  "south" : DIR+"/rooms/x33y53z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
