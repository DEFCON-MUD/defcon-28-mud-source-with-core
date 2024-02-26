inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 48, 7 }));
  set_short( "Passage - x33y48z7" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y48z7.c",
  "north" : DIR+"/rooms/x33y49z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
