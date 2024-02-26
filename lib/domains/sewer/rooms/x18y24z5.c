inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 24, 5 }));
  set_short( "Hallway - x18y24z5" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y24z5.c",
  "east" : DIR+"/rooms/x19y24z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
