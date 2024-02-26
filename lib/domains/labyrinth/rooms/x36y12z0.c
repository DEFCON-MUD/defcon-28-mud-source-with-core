inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 12, 0 }));
  set_short( "Corridor - x36y12z0" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y12z0.c",
  "east" : DIR+"/rooms/x37y12z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
