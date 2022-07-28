inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 46, 4 }));
  set_short( "Passage - x28y46z4" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y46z4.c",
  "east" : DIR+"/rooms/x29y46z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
