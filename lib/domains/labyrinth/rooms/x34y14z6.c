inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 14, 6 }));
  set_short( "Hallway - x34y14z6" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y14z6.c",
  "east" : DIR+"/rooms/x35y14z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
