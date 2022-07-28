inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 60, 9 }));
  set_short( "Corridor - x22y60z9" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y60z9.c",
  "east" : DIR+"/rooms/x23y60z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
