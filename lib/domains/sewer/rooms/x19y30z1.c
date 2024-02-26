inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 30, 1 }));
  set_short( "Passage - x19y30z1" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y30z1.c",
  "north" : DIR+"/rooms/x19y31z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
