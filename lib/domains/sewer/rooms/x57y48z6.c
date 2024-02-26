inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 48, 6 }));
  set_short( "Hallway - x57y48z6" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y48z6.c",
  "north" : DIR+"/rooms/x57y49z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
