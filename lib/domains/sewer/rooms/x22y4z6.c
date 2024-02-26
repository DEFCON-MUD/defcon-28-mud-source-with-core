inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 4, 6 }));
  set_short( "Hallway - x22y4z6" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y4z6.c",
  "east" : DIR+"/rooms/x23y4z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
