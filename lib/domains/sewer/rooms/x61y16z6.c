inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 16, 6 }));
  set_short( "Corridor - x61y16z6" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y16z6.c",
  "south" : DIR+"/rooms/x61y15z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
