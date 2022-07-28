inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 32, 2 }));
  set_short( "Passage - x18y32z2" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y32z2.c",
  "east" : DIR+"/rooms/x19y32z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
