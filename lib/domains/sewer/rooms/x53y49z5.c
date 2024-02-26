inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 49, 5 }));
  set_short( "Hallway - x53y49z5" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y50z5.c",
  "south" : DIR+"/rooms/x53y48z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
