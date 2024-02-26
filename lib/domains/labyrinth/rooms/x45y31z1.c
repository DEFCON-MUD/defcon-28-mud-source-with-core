inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 31, 1 }));
  set_short( "Hallway - x45y31z1" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y32z1.c",
  "south" : DIR+"/rooms/x45y30z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
