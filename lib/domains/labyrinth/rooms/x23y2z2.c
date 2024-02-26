inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 2, 2 }));
  set_short( "Passage - x23y2z2" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y2z2.c",
  "east" : DIR+"/rooms/x24y2z2.c",
  "north" : DIR+"/rooms/x23y3z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
