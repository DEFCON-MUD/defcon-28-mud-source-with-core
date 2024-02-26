inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 48, 7 }));
  set_short( "Corridor - x3y48z7" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y49z7.c",
  "south" : DIR+"/rooms/x3y47z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
