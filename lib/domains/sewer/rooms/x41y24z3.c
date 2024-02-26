inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 24, 3 }));
  set_short( "Passage - x41y24z3" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y24z3.c",
  "south" : DIR+"/rooms/x41y23z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
