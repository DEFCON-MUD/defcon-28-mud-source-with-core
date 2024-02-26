inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 2, 6 }));
  set_short( "Corridor - x17y2z6" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y2z6.c",
  "east" : DIR+"/rooms/x18y2z6.c",
  "south" : DIR+"/rooms/x17y1z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
