inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 2, 4 }));
  set_short( "Corridor - x56y2z4" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y2z4.c",
  "east" : DIR+"/rooms/x57y2z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
