inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 62, 5 }));
  set_short( "Corridor - x37y62z5" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y62z5.c",
  "east" : DIR+"/rooms/x38y62z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
