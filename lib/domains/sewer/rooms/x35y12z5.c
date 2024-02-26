inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 12, 5 }));
  set_short( "Hallway - x35y12z5" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y12z5.c",
  "east" : DIR+"/rooms/x36y12z5.c",
  "north" : DIR+"/rooms/x35y13z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
