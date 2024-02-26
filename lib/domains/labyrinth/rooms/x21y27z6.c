inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 27, 6 }));
  set_short( "Passage - x21y27z6" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y28z6.c",
  "south" : DIR+"/rooms/x21y26z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
