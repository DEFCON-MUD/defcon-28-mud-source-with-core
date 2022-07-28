inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 8, 7 }));
  set_short( "Passage - x41y8z7" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y8z7.c",
  "east" : DIR+"/rooms/x42y8z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
