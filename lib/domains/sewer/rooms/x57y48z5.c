inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 48, 5 }));
  set_short( "Hallway - x57y48z5" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y48z5.c",
  "east" : DIR+"/rooms/x58y48z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the radioactive waste in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
