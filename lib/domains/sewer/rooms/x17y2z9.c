inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 2, 9 }));
  set_short( "Passage - x17y2z9" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y2z9.c",
  "south" : DIR+"/rooms/x17y1z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
