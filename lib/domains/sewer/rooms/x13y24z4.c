inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 24, 4 }));
  set_short( "Passage - x13y24z4" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y25z4.c",
  "south" : DIR+"/rooms/x13y23z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
