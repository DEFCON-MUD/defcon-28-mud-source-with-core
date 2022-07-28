inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 30, 5 }));
  set_short( "Corridor - x20y30z5" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y30z5.c",
  "east" : DIR+"/rooms/x21y30z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
