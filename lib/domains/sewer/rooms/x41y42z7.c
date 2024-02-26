inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 42, 7 }));
  set_short( "Hallway - x41y42z7" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y42z7.c",
  "east" : DIR+"/rooms/x42y42z7.c",
  "south" : DIR+"/rooms/x41y41z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
