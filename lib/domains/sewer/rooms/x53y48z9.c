inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 48, 9 }));
  set_short( "Hallway - x53y48z9" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y48z9.c",
  "north" : DIR+"/rooms/x53y49z9.c",
  "south" : DIR+"/rooms/x53y47z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
