inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 40, 6 }));
  set_short( "Passage - x29y40z6" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y40z6.c",
  "north" : DIR+"/rooms/x29y41z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
