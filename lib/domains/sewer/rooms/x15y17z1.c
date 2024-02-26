inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 17, 1 }));
  set_short( "Hallway - x15y17z1" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y18z1.c",
  "south" : DIR+"/rooms/x15y16z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
