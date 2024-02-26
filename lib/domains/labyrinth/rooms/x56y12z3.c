inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 12, 3 }));
  set_short( "Corridor - x56y12z3" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y12z3.c",
  "east" : DIR+"/rooms/x57y12z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
