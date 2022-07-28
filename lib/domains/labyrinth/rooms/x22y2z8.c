inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 2, 8 }));
  set_short( "Passage - x22y2z8" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y2z8.c",
  "east" : DIR+"/rooms/x23y2z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
