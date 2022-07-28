inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 64, 7 }));
  set_short( "Passage - x23y64z7" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y64z7.c",
  "east" : DIR+"/rooms/x24y64z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
