inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 30, 5 }));
  set_short( "Corridor - x31y30z5" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y30z5.c",
  "south" : DIR+"/rooms/x31y29z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
