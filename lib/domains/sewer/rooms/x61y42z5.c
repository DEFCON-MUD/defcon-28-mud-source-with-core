inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 42, 5 }));
  set_short( "Hallway - x61y42z5" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y42z5.c",
  "north" : DIR+"/rooms/x61y43z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
