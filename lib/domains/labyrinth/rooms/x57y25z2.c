inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 25, 2 }));
  set_short( "Corridor - x57y25z2" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y26z2.c",
  "south" : DIR+"/rooms/x57y24z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
