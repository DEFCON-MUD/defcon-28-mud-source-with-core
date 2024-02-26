inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 62, 9 }));
  set_short( "Passage - x5y62z9" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y62z9.c",
  "east" : DIR+"/rooms/x6y62z9.c",
  "south" : DIR+"/rooms/x5y61z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
