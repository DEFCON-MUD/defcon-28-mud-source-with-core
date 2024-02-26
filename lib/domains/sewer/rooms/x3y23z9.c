inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 23, 9 }));
  set_short( "Passage - x3y23z9" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y24z9.c",
  "south" : DIR+"/rooms/x3y22z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
