inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 4, 4 }));
  set_short( "Hallway - x22y4z4" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y4z4.c",
  "east" : DIR+"/rooms/x23y4z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
