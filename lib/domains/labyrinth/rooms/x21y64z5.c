inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 64, 5 }));
  set_short( "Passage - x21y64z5" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y64z5.c",
  "east" : DIR+"/rooms/x22y64z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
