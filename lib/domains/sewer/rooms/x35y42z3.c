inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 42, 3 }));
  set_short( "Hallway - x35y42z3" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y42z3.c",
  "north" : DIR+"/rooms/x35y43z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
