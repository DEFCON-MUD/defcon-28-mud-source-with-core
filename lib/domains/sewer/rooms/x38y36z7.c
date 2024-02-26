inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 36, 7 }));
  set_short( "Passage - x38y36z7" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y36z7.c",
  "east" : DIR+"/rooms/x39y36z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
