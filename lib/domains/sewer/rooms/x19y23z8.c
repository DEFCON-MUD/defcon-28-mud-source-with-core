inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 23, 8 }));
  set_short( "Passage - x19y23z8" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y24z8.c",
  "south" : DIR+"/rooms/x19y22z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
