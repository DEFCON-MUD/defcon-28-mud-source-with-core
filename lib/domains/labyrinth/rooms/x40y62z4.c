inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 62, 4 }));
  set_short( "Passage - x40y62z4" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y62z4.c",
  "east" : DIR+"/rooms/x41y62z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
