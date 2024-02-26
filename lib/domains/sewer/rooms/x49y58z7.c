inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 58, 7 }));
  set_short( "Hallway - x49y58z7" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y59z7.c",
  "south" : DIR+"/rooms/x49y57z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
