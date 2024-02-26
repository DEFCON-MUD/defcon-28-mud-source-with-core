inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 52, 8 }));
  set_short( "Passage - x43y52z8" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y52z8.c",
  "east" : DIR+"/rooms/x44y52z8.c",
  "south" : DIR+"/rooms/x43y51z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
