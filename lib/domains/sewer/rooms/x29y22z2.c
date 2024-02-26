inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 22, 2 }));
  set_short( "Passage - x29y22z2" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y23z2.c",
  "south" : DIR+"/rooms/x29y21z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
