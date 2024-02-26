inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 14, 5 }));
  set_short( "Hallway - x59y14z5" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y14z5.c",
  "east" : DIR+"/rooms/x60y14z5.c",
  "south" : DIR+"/rooms/x59y13z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
