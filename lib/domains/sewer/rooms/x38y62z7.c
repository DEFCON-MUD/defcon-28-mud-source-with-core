inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 62, 7 }));
  set_short( "Passage - x38y62z7" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y62z7.c",
  "east" : DIR+"/rooms/x39y62z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
