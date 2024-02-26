inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 12, 6 }));
  set_short( "Corridor - x42y12z6" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y12z6.c",
  "east" : DIR+"/rooms/x43y12z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
