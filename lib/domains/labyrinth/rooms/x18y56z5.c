inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 56, 5 }));
  set_short( "Passage - x18y56z5" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y56z5.c",
  "east" : DIR+"/rooms/x19y56z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
