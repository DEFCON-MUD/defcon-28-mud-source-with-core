inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 14, 5 }));
  set_short( "Corridor - x54y14z5" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y14z5.c",
  "east" : DIR+"/rooms/x55y14z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
