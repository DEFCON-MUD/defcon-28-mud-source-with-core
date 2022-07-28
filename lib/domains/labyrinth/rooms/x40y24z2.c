inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 24, 2 }));
  set_short( "Corridor - x40y24z2" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y24z2.c",
  "east" : DIR+"/rooms/x41y24z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
