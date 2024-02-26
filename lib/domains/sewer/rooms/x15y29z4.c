inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 29, 4 }));
  set_short( "Passage - x15y29z4" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y30z4.c",
  "south" : DIR+"/rooms/x15y28z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
