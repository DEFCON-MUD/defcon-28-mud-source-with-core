inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 6, 5 }));
  set_short( "Corridor - x42y6z5" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y6z5.c",
  "east" : DIR+"/rooms/x43y6z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
