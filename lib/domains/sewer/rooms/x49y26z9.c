inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 26, 9 }));
  set_short( "Passage - x49y26z9" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y26z9.c",
  "north" : DIR+"/rooms/x49y27z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
